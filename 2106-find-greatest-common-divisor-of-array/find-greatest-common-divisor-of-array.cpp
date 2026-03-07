class Solution {
public:
     
    int gcd(int a,int b){
        while(a>0&&b>0){
            if(a>b){
                a=a%b;
            }else{
                b=b%a;
            }
        }
        if(a==0) return b;
         return a;
    }
    int findGCD(vector<int>& nums) {
        int minn = nums[0], maxn = nums[0];
        for(int x : nums){
            minn = min(minn, x);
            maxn = max(maxn, x);
        }

        return gcd(minn, maxn);
    }
};