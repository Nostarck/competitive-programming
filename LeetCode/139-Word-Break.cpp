class Solution {
public:

    //think this is like a knapsack problem
    bool wordBreak(string s, vector<string>& wordDict) {
        // dp[i - word.size()] is true  || i < 0 then true
        // and word from dictionary ends in in then true
        vector<int> dp(s.size());

        unordered_set<string> dict;
        for(string word: wordDict) dict.insert(word);

        //run through s to check state i
        for(int i = 0; i < s.size(); i++){
            for(int j = 0; j <= i; j++){
                int subSize = i-j+1;
                string subij = s.substr(j, subSize);
                if(dict.find(subij) != dict.end()){
                    if(i - subSize < 0){
                        dp[i] = true;
                    }
                    else if(dp[i-subSize]){
                        dp[i] = true;
                    }
                }
            }
        }

        
        return dp[s.size()-1];
    }
};