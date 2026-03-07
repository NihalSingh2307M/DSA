class Solution {
public:
    int maximumWealth(vector<vector<int>>& acc) {
        int maxamount=0;
        for(int i=0;i<acc.size();i++){
            int amount = 0;
            for(int j=0;j<acc[i].size();j++){
                amount += acc[i][j];
            }
             maxamount = max(maxamount,amount);
        }
        return maxamount;
    }
};