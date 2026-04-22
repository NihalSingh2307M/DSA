class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxnum = nums[0];
        int idx = -1;
        for(int x : nums){
            maxnum = max(maxnum,x);
        }

        for(int i = 0;i<nums.size();i++){
            if(nums[i]==maxnum){
                idx = i;
                break;
            }
        }

        for(int i = 0;i<nums.size();i++){
            if(i != idx && nums[i]*2>maxnum){
                return -1;
            }
        }

        return idx;

    }
};