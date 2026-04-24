class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int L = 0,R=0,dash = 0,ans =0;
        for(char c : moves){
            if(c=='L') L++;
            else if(c=='R')R++;
            else dash++;

            ans = abs(L-R)+dash;
        }
        return ans;
    }
};