class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int minp = prices[0];

        for (int i = 1; i < prices.size(); i++) {
            profit = max(profit, prices[i] - minp);
            minp = min(minp, prices[i]);
        }
        return profit;
    }
};
