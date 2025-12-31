class Solution {
public:
    int dietPlanPerformance(vector<int>& calories, int k, int lower, int upper) {
        vector<int> dp(calories.size());
        dp[0] = calories[0];
        for(int i = 1; i < calories.size(); i++){
            dp[i] = dp[i-1] + calories[i];
        }
        int result = 0;
        if(dp[k-1] > upper) result++;
        else if(dp[k-1] < lower) result--;
        for(int i = k; i < calories.size(); i++){
            int T = dp[i] - dp[i-k];
            if(T > upper){
                result++;
            }
            else if(T < lower){
                result--;
            }
        }
        return result;
    }
};