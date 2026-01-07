class Leaderboard {
public:

    map<int,int> scoreById;
    priority_queue<int> topK;

    Leaderboard() {
        
    }
    
    void addScore(int playerId, int score) {
        scoreById[playerId] += score;
    }
    
    int top(int K) {
        for(map<int,int>::iterator it = scoreById.begin(); it != scoreById.end(); ++it){
            int score = it->second;
            topK.push(score);
        }
        int scoreSum = 0;
        for(int i = 1; i <= K; i++){
            if(topK.empty()){
                break;
            }
            scoreSum += topK.top();
            topK.pop();
        }
        topK = priority_queue<int>();
        return scoreSum;
    }
    
    void reset(int playerId) {
        scoreById[playerId] = 0;
    }
};

/**
 * Your Leaderboard object will be instantiated and called as such:
 * Leaderboard* obj = new Leaderboard();
 * obj->addScore(playerId,score);
 * int param_2 = obj->top(K);
 * obj->reset(playerId);
 */