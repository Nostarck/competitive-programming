class Solution {
public:
    unordered_map<int,int> dp;
    vector<int> v;
    int n;

    int rob(vector<int>& nums) {
         v = nums;
         n = nums.size();
         return solve(0);
    }

    int solve(int i){
        if(i == n-1){
            return v[i];
        }
        else if(i >= n){
            return 0;
        }
        else if(dp.find(i) != dp.end()){
            return dp[i];
        }
        else{
            int sol1 = v[i] + solve(i+2);
            int sol2 = solve(i+1);
            return dp[i] = max(sol1,sol2);
        }
    }
};