class Solution {
public:
    //sliding window
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> lastIndexOfChar;
        int response = 0;
        int currentLength = 0;
        
        int n = s.size();
        int left,right;
        left = right = 0;
        while(right < n){
            if(lastIndexOfChar.find(s[right]) != lastIndexOfChar.end()){
                left = max(left, lastIndexOfChar[s[right]]);
            }
            currentLength = right - left + 1;
            response = max(currentLength, response);
            lastIndexOfChar[s[right]] = right + 1;
            right++;
        }

        return response;
    }
};