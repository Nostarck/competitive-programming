class Solution {
public:
    
    bool condition(int val, int target){
        if(val >= target) return true;
        return false;
    }

    int binarySearch(vector<int> v, int target){
        int left,right;
        left = 0;
        right = v.size();
        
        while(left < right){
            int mid =  left + (right-left)/2;
            if(condition(v[mid], target)){
                right = mid;
            }
            else{
                left = mid+1;
            }
        }
        return left;
    }

    int searchInsert(vector<int>& nums, int target) {
        
        int i = binarySearch(nums, target);
        return i;
    }
};

