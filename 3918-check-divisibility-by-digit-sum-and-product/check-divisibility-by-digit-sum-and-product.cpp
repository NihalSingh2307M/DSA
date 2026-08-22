class Solution {
public:
    bool checkDivisibility(int n) {
        int number = n;
        int sum = 0;
        int prod = 1;

        while (number > 0) {
            int digit = number % 10;
            number /= 10;

            sum += digit;
            prod *= digit;
        }

        int total = sum + prod;

        return n % total == 0;
    }
};