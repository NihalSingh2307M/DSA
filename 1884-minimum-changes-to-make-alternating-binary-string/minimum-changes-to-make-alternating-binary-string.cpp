class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        int patt1 = 0;
        int patt0 = 0;

        for(int i=0;i<n;i++){
            if(i%2==0){
                if(s[i]=='0'){
                    patt1++;
                }else{
                    patt0++;
                }
            }else{
                if(s[i]=='1'){
                    patt1++;
                }else{
                    patt0++;
                }
            }
        }
        return min(patt0,patt1);
    }
};