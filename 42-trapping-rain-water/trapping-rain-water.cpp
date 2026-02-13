class Solution {
public:
    int trap(vector<int>& height) {
        int size = height.size();
        vector<int> left(size);
        vector<int> right(size);
         left[0]= height[0];
         right[height.size()-1] = height[size-1];
        for(int i =1;i<size;i++){
            left[i] = max(height[i],left[i-1]);
        }
        for(int i=size-2;i>=0;i--){
              right[i] = max(height[i],right[i+1]);
        }
        int area = 0;
        for(int i=0;i<size;i++){
            area += min(left[i],right[i]) - height[i];
            
        }
        return area;
    }
};