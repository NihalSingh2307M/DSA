class Solution {
public:

    int binarySearch(vector<int>& nums,int target,bool firstVal){
        int left =0,right = nums.size()-1;
        int ans =-1;

        while(left<=right){
            int mid = left+(right-left)/2;

            if(nums[mid]<target){
                left = mid+1;
            }else if(nums[mid]>target){
                right = mid-1;
            }else{
                ans = mid;
                if(firstVal){
                    right = mid-1;
                }else{
                    left = mid+1;
                }
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int first = binarySearch(nums,target,true);
        int secound = binarySearch(nums,target,false);

        return{first,secound};
    }
};