class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> response(nums.size());
        int xi = 0;
        int yi = 1;
        for(int i = 0; i < n; i++){
            response[xi] = nums[i];
            response[yi] = nums[i+n];
            xi+=2;
            yi+=2;
        }
        return response;
        
    }
};