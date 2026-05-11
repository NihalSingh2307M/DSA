class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        for(int n :nums){
            int start = ans.size();
            while(n>0){
                ans.push_back(n%10);
                n/=10;
            }
            reverse(ans.begin()+start,ans.end());
        }
        return ans;
    }
};