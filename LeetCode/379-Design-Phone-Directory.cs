public class PhoneDirectory {

    bool[] phoneStatus;
    Queue<int> phones;

    public PhoneDirectory(int maxNumbers) {
        phoneStatus = new bool[maxNumbers];
        phones = new Queue<int>();
        for(int i = 0; i < maxNumbers; i++){
            phoneStatus[i] = true;
            phones.Enqueue(i);
        }
    }
    
    public int Get() {
        if(phones.TryPeek(out int numberAvailable)){
            phones.Dequeue();
            phoneStatus[numberAvailable] = false;
            return numberAvailable;
        }
        return -1;

    }
    
    public bool Check(int number) {
        return phoneStatus[number];
    }
    
    public void Release(int number) {
        if(!phoneStatus[number]){
            phoneStatus[number] = true;
            phones.Enqueue(number);
        }
        
    }
}

/**
 * Your PhoneDirectory object will be instantiated and called as such:
 * PhoneDirectory obj = new PhoneDirectory(maxNumbers);
 * int param_1 = obj.Get();
 * bool param_2 = obj.Check(number);
 * obj.Release(number);
 */