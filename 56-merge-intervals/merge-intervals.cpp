class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int size = intervals.size();

        vector<vector<int>> mergearr;

        for(int i = 0;i<size;i++){
            if(mergearr.empty()|| mergearr.back()[1]<intervals[i][0]){
                mergearr.push_back(intervals[i]);
            }else{
                mergearr.back()[1] = max(mergearr.back()[1],intervals[i][1]);
            }
        }
        return mergearr;
    }
};