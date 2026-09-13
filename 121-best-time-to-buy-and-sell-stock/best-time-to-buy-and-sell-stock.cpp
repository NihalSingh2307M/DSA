class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int minnum = prices[0];

        for(int i =0;i<prices.size();i++){
            profit = max(profit,prices[i]-minnum);
            minnum = min(minnum,prices[i]);
        }
        return profit;
    }
};