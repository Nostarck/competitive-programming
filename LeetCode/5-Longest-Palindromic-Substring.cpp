class Solution {
public:

    pair<int,int> getPalindromeIndexes(int left, int right, string s){
        pair<int,int> indexes = {-1,-1};
        while(left >= 0 && right < s.size()){
            if(s[left] == s[right]){
                indexes.first = left;
                indexes.second = right;
            }
            else{
                break;
            }
            left--;
            right++;
        }
        return indexes;
    }

    string longestPalindrome(string s) {
        //expand for centers, if center is a palindrom and edges
        // are equal then is also a palindrome

        pair<int,int> ansIndex = {0,0};
        int ansSize = 1;
        //expand from centers
        for(int i = 0; i < s.size(); i++){
            pair<int,int> oddPair = getPalindromeIndexes(i,i,s);
            int oddSize = oddPair.second - oddPair.first + 1;
            pair<int,int> evenPair = getPalindromeIndexes(i,i+1,s);
            int evenSize = evenPair.second - evenPair.first + 1;
            if(oddSize > ansSize){
                ansSize = oddSize;
                ansIndex.first = oddPair.first;
                ansIndex.second = oddPair.second;
            }
            if(evenSize > ansSize){
                ansSize = evenSize;
                ansIndex.first = evenPair.first;
                ansIndex.second = evenPair.second;
            }
        }
        string ans;
        for(int i = ansIndex.first; i <= ansIndex.second;  i++){
            ans += s[i];
        }
        return ans;
    }
};