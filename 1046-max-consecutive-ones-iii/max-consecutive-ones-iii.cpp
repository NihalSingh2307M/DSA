class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left =0; int maxlen = 0; int zerosize = 0;

        for(int right = 0;right<nums.size();right++){
            if(nums[right] == 0){
                zerosize++;
            }
            while(zerosize>k){
                if(nums[left] == 0){
                    zerosize--;
                }
                left++;
            }
            maxlen = max(maxlen, right-left+1);
        }
        return maxlen;
    }
};