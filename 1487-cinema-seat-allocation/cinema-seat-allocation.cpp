class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int, unordered_set<int>> reserved;

        for (auto &seat : reservedSeats) {
            reserved[seat[0]].insert(seat[1]);
        }
        int ans = (n - reserved.size()) * 2;

        for (auto &[row, seats] : reserved) {
            bool left = true;
            bool middle = true;
            bool right = true;  
            for (int seat : seats) {
                if (seat == 2 || seat == 3 || seat == 4 || seat == 5)
                    left = false;

                if (seat == 4 || seat == 5 || seat == 6 || seat == 7)
                    middle = false;

                if (seat == 6 || seat == 7 || seat == 8 || seat == 9)
                    right = false;
            }
            if (left && right) {
                ans += 2;
            } 
            else if (left || middle || right) {
                ans += 1;
            }
        }
        return ans;
    }
};