class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int winSum = 0;
        int n = nums.size();

        for(int i = 0; i < k; i++) winSum += nums[i];
        int sum = winSum;
        int maxSum = sum;

        for(int i = k; i < n; i++) {
            sum += nums[i];
            sum -= nums[i - k];
            maxSum = max(maxSum, sum);
        }
        return (double)maxSum / k;
    }
};  