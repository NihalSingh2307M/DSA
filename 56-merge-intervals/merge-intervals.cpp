class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        int n = intervals.size();
        vector<vector<int>> mergedarr;

        for(int i = 0;i<n;i++){
            if(mergedarr.empty() || mergedarr.back()[1]<intervals[i][0]){
                mergedarr.push_back(intervals[i]);
            }else{
                mergedarr.back()[1] = max(mergedarr.back()[1],intervals[i][1]);
            }
        }
        return mergedarr;
    }
};