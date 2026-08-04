class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mi = 100;
        int ma = 0;

        unordered_set<int> s;
        for(int x: nums){
            mi = min(mi,x);
            ma = max(ma,x);
            s.insert(x);
        }
        vector<int> ans;
        for(int x = mi+1;x<ma;x++){
            if(!s.count(x)){
                ans.push_back(x);
            }
        }
        return ans;
    }
};