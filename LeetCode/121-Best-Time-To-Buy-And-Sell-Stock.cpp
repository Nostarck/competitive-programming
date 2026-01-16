class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        int min_price = 10010;
        int max_profit = 0;
        for(int i = 0; i < n; i++){
            min_price = min(min_price, prices[i]);
            int profit = prices[i] - min_price;
            max_profit = max(profit, max_profit);
        }
        return max_profit;
    }w
};