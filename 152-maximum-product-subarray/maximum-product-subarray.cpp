class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mini = nums[0];
        int maxi = nums[0];
        int ans = nums[0];

        for(int i =1;i<nums.size();i++){
            int curr = nums[i];
            
            int a = curr*maxi;
            int b = curr*mini;

            maxi = max(curr,max(a,b));
            mini = min(curr,min(a,b));

            ans =max(ans,maxi);
        }
        return ans;
    }
};