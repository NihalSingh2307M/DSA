class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_set<int> st;

        long long currSum = 0, maxSum = 0;
        int left= 0;

        for(int right = 0;right<nums.size();right++){
            while(st.count(nums[right]) || st.size()== k){
                st.erase(nums[left]);
                currSum -= nums[left];
                left++;
            }
            currSum += nums[right];
            st.insert(nums[right]);

            if(st.size() == k){
                maxSum = max(maxSum,currSum);
            }
        }
        return maxSum;
    }
};