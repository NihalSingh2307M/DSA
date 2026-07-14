class Solution {
public:
    bool isHappy(int n) {
        int slow = sq(n);
        int fast = sq(sq(n));
        while(slow!= fast){
            slow = sq(slow);
            fast = sq(sq(fast));

            if(slow == 1 || fast ==1){
                return true;
            }
        }
        return slow ==1;
    }

    int sq(int num ){
        int ans = 0;
        while(num>0){
            int last = num%10;
            ans += last*last;
            num = num/10;
        }
        return ans;
    }

};