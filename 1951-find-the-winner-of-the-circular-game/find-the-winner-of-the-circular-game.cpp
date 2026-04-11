class Solution {
public:
    
    int r(int n,int k){
        if(n==1) return 0;

        return (r(n-1,k)+k)%n;
    }

    int findTheWinner(int n, int k) {
        return r(n,k)+1;
        
    }
};