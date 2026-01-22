class Solution {
public:

    unordered_map<int, int> dp;
    unordered_map<int,int> gainByNum;

    int deleteAndEarn(vector<int>& nums) {
        //choose a number that appeard in nums
        // save a sum of each number to know how much it cost to eliminate this number
        // for example map<int,int> <number, sum>
        // ans will be dp[i] + dp[i-1] + dp[i-2]
        
        
        int maxNumber = 0;
        for(int num: nums){
            gainByNum[num] += num;
            maxNumber = max(maxNumber, num);
        }
        int response = 0;
        for(int i = 0; i <= maxNumber; i++){
            response = max(maxPoints(i), response);
        }
        
        return response;
        
    }

    int maxPoints(int num){
        if(num == 1) return gainByNum[1];
        if(!num) return 0;
        if(dp.find(num) != dp.end()){
            return dp[num];
        }
        int op1 = gainByNum[num] + maxPoints(num-2);
        int op2 = maxPoints(num-1);
        return dp[num] = max(op1, op2);
    }
};