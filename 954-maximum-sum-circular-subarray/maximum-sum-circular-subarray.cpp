class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxSum = INT_MIN;
        int currMax = 0;

        int currMin = 0;
        int minSum = INT_MAX;

        int totalSum = 0;

        for(int i = 0; i < nums.size(); i++){
            totalSum += nums[i];
            currMax += nums[i];
            maxSum = max(maxSum, currMax);
            if(currMax < 0)
                currMax = 0;

            currMin += nums[i];
            minSum = min(minSum, currMin);
            if(currMin > 0)
                currMin = 0;
        }
        if(maxSum < 0)
            return maxSum;

        return max(maxSum, totalSum - minSum);
    }
};