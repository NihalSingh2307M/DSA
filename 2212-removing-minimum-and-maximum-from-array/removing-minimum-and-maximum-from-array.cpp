class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n =nums.size();

        int maxi = INT_MIN;
        int mini = INT_MAX;

        int maxidx = 0;
        int minidx =0;

        for(int i =0;i<n;i++){
            if(nums[i]>maxi){
                maxi = nums[i];
                maxidx = i;
            }
        }

        for(int i =0;i<n;i++){
            if(nums[i]<mini){
                mini = nums[i];
                minidx = i;
            }
        }

        int left = min(minidx,maxidx);
        int right = max(minidx,maxidx);

        int frontboth = right+1;
        int backboth = n-left;
        int frontback  = (left+1)+(n-right);

        return min({frontboth,backboth,frontback});
    }
};