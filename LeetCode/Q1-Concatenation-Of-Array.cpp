class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> response(nums.begin(), nums.end());
        response.insert(response.end(), nums.begin(), nums.end());
        return response;  
    }
};