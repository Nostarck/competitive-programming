class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int response = 0;
        int currCount = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]){
                currCount++;
            }
            else{
                currCount = 0;
            }
            response = max(response,currCount);
        }   
        return response;
    }
};