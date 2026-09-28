class Solution {
public:
    int maxDepth(string s) {
        int ans = 0;
        int digit = 0;

        for( char c : s){
            if(c == '('){
                digit++;
                ans = max(ans,digit);
            }else if( c == ')'){
                digit--;
            }
        }
        return ans;
    }
};