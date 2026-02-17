public class AuthenticationManager {
    int timeToLive;
    int unexpiredTokens = 0;
    Dictionary<string, int> tokens;
    PriorityQueue<string, int> expirationTimes;

    public AuthenticationManager(int timeToLive) {
        tokens = new Dictionary<string,int>();
        expirationTimes = new PriorityQueue<string, int>();
        this.timeToLive = timeToLive;   
    }
    
    public void Generate(string tokenId, int currentTime) {
        int expirationTime = currentTime + timeToLive;
        tokens[tokenId] = expirationTime;
        unexpiredTokens++;
        expirationTimes.Enqueue(tokenId, expirationTime);
    }

    public void Renew(string tokenId, int currentTime) {
        SimulateTime(currentTime);
        int expirationTime = currentTime + timeToLive;
        if(tokens.ContainsKey(tokenId) && tokens[tokenId] != -1){
            tokens[tokenId] = expirationTime;
            expirationTimes.Enqueue(tokenId, expirationTime);
        }
    }
    
    public int CountUnexpiredTokens(int currentTime) {
        
        SimulateTime(currentTime);
        return unexpiredTokens;
    }

    public void SimulateTime(int currentTime){
        while (expirationTimes.TryPeek(out string token, out int time) && time <= currentTime)
        {
            if(time == tokens[token]){
                unexpiredTokens--;
                tokens[token] = -1;
            }
            expirationTimes.Dequeue();
        }
    }
}

/**
 * Your AuthenticationManager object will be instantiated and called as such:
 * AuthenticationManager obj = new AuthenticationManager(timeToLive);
 * obj.Generate(tokenId,currentTime);
 * obj.Renew(tokenId,currentTime);
 * int param_3 = obj.CountUnexpiredTokens(currentTime);
 */