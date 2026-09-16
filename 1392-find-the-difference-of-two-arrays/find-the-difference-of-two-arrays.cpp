class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(),nums1.end());
        unordered_set<int> set2(nums2.begin(),nums2.end());

        vector<int> list1,list2;

        for(int n: set1){
            if(!set2.count(n)){
                list1.push_back(n);
            }
        }

        for(int n:set2){
            if(!set1.count(n)){
                list2.push_back(n);
            }
        }
        return {list1,list2};
    }
};