class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;
        int maxarea = INT_MIN;

        while(i<j){
            int minheight = min(height[i],height[j]);
            int dis = j-i;
            int area = dis*minheight;

            maxarea = max(area,maxarea);

              if(height[i]<=height[j]){
            i++;
        }else{
            j--;
        }
        }

        return maxarea;
    }
};