class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>ans;
        int currSum = 0;
        for(int i =0;i<nums.size();i++){
            currSum += nums[i];
            ans.push_back(currSum);
        }
        return ans;
    }
};