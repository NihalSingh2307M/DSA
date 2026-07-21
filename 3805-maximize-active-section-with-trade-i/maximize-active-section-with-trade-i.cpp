class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n = s.size();

        int totalone = 0;
        int prevzero = INT_MIN;
        int maxmergezero = 0;

        int idx = 0;
        while(idx<n){
            int nextidx = idx;
            while(nextidx<n && s[nextidx] == s[idx])
            nextidx++;

            int groupLen = nextidx - idx;

            if(s[idx]=='1'){
                totalone += groupLen;
            }else{
                maxmergezero= max(maxmergezero,prevzero+groupLen);
                prevzero = groupLen;
            }
            idx = nextidx;
        }
        return totalone + maxmergezero;
    }
};