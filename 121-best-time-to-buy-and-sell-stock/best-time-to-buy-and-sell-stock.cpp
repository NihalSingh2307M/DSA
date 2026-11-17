class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprof = 0;
        int maxi = INT_MIN,mini = INT_MAX,profit;
        for(int i = 0;i<prices.size();i++){
             mini = min(mini,prices[i]);
             profit = prices[i] - mini;
             maxi = max(maxi,profit);
        }
        return maxi;
    }
};