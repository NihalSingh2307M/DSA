class Solution {
public:
    int maxProduct(int n) {
        int large = -1;
        int seclarge = -1;

        while(n>0){
            int digit = n%10;

            if(digit>=large){
                seclarge = large;
                large = digit;
            }else if(digit>seclarge){
                seclarge = digit;
            }

            n/=10;
        }
        return large*seclarge;
    }
};