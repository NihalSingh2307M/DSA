class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = INT_MIN;
        for(int x:candies){
            if(x>max){
                max = x;
            }
        }

        vector<bool> ans;

        for(int i = 0;i<candies.size();i++){
            int val = candies[i] +extraCandies;
            if(val>=max){
                ans.push_back(true);
            }else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};