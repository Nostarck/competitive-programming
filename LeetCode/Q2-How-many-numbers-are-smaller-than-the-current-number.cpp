class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        unordered_map<int,int> counter;
        unordered_map<int,int> responsesByNumber;
        int totalNumbers = nums.size();
        for(int i = 0; i < nums.size(); i++){
            counter[nums[i]]++;
        }
        for(int i = 100; i >= 0; i--){
            if(counter[i]){
                int smallerNumbers = totalNumbers - counter[i];
                responsesByNumber[i] = smallerNumbers;
                totalNumbers -= counter[i];
            }
        }
        vector<int> result;
        result.reserve(nums.size());
        for(int i = 0; i < nums.size(); i++){
            result.push_back(responsesByNumber[nums[i]]);
        }
        return result;
    }
};