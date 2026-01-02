class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        vector<bool> memo(10010, false);
        int res = 0;
        for(int i = 0; i < nums.size(); i++){
            if(!memo[nums[i]]){
                memo[nums[i]] = true;
            }
            else{
                res = nums[i];
                break;
            }
        }
        return res;
        
    }
};