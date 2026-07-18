class Solution {
public:
    int gcd(int dividend, int divisor) {
        while (divisor != 0) {
            int rem = dividend % divisor;
            dividend = divisor;
            divisor = rem;
        }
        return dividend;
    }
    int findGCD(vector<int>& nums) {
        int minimum = nums[0];
        int maximum = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < minimum)
                minimum = nums[i];
            if (nums[i] > maximum)
                maximum = nums[i];
        }

        return gcd(maximum, minimum);
    }
};