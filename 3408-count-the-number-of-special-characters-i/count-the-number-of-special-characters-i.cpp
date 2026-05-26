class Solution {
public:
    int numberOfSpecialChars(string word) {

        int count = 0;
        for(char c = 'a'; c <= 'z'; c++) {
            int small = 0;
            int capital = 0;
            for(char ch : word) {
                if(ch == c)
                    small = 1;

                if(ch == toupper(c))
                    capital = 1;
            }
            if(small && capital)
                count++;
        }
        return count;
    }
};