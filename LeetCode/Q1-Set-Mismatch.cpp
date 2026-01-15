class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> counter(nums.size());
        int numberRepeated = 0;
        int numberMissing  = 0;
        for(int i = 0; i < nums.size(); i++){
            counter[nums[i]-1]++;
        }
        for(int i = 0; i < nums.size(); i++){
            if(counter[i] == 2){
                numberRepeated = i+1;
            }
            else if(!counter[i]){
                numberMissing = i+1;
            }
        }
        return {numberRepeated, numberMissing};
        
    }
};