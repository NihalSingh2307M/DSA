class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int res = 0;
        int majority = 0;

        for(int n : nums){
            mp[n] = 1+mp[n];
            if(mp[n]>majority){
                res = n;
                majority = mp[n];
            }
        }
        return res;
    }
};