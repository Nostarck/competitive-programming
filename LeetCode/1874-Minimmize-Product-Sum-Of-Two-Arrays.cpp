class Solution {
public:
    int minProductSum(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end(), std::greater<int>());
        int result = 0;
        for(int i = 0; i < nums1.size(); i++){
            result += (nums1[i] * nums2[i]);
        }
        return result;
    }
};