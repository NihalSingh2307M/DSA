class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int wsum = 0;
        int n = nums.size();

        for(int i =0;i<k;i++){
            wsum += nums[i];
        }

        int maxsum  = wsum;
        int sum  = wsum;
        for(int i = k;i<n;i++){
            sum += nums[i];
            sum -= nums[i-k];
            maxsum = max(maxsum,sum);
        }

        return(double) maxsum/k;
    }
};