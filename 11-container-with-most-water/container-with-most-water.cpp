class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
        int maxarea = 0;

        while (i < j) {
            int minm = min(height[i], height[j]);
            int dis = j - i;
            int area = minm * dis;

            maxarea = max(area, maxarea); 

            if (height[i] <= height[j]) {
                i++;
            } else {
                j--;
            }
        }
        return maxarea;
    }
};
