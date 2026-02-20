class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low = 0, high = matrix.size() * matrix[0].size();
        int mid, x;
        
        while (low < high) {
            mid = (low + high) / 2;
            x = matrix[mid / matrix[0].size()][mid % matrix[0].size()];
            
            if (x == target) {
                return true;
            } else if (x < target) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        
        return false;
    }
};