class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        int maxs = nums[0];

        vector<int> prefixGcd(n);

        for (int i = 0; i < n; i++) {
            maxs = max(nums[i], maxs);
            prefixGcd[i] = gcd(nums[i], maxs);
        }
        sort(prefixGcd.begin(), prefixGcd.end());

        long long ans = 0;

        for (int left = 0, right = n - 1; left < right; left++, right--) {
            ans += gcd(prefixGcd[left], prefixGcd[right]);
        }
        return ans;
    }

    int gcd(int a, int b) {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }
};