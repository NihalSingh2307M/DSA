class Solution {
public:
    bool canJump(vector<int>& nums) {
        int fp=nums.size() -1;
        for(int i = nums.size()-2;i>=0;i--){
            if(i+nums[i]>=fp){
                fp=i;
            }
        }return fp ==0;
    }
};