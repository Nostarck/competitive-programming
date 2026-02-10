public class HitCounter {

    Queue<int> q;
    int totalHits = 0;

    public HitCounter() {
        q = new Queue<int>();
    }
    
    public void Hit(int timestamp) {
        q.Enqueue(timestamp);
        totalHits++;
    }
    
    public int GetHits(int timestamp) {
        while(q.Count > 0 && q.Peek() <= timestamp - 300){
            totalHits--;
            q.Dequeue();
        }

        return totalHits;
    }
}

/**
 * Your HitCounter object will be instantiated and called as such:
 * HitCounter obj = new HitCounter();
 * obj.Hit(timestamp);
 * int param_2 = obj.GetHits(timestamp);
 */