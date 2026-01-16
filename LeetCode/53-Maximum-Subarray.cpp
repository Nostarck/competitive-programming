class Solution {
public:
    //Kadane Algorithm
    int maxSubArray(vector<int>& nums) {
        int result = nums[0];
        int current_sum = 0;
        for(int num : nums){
            current_sum += num;
            result = max(result, current_sum);
            if(current_sum < 0){
                current_sum = max(0,num);
            }            
        }
        return result;
    }
};