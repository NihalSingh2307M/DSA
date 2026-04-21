class Solution {
public:
    double average(vector<int>& salary) {
        int maxnum = INT_MIN,minnum = INT_MAX;
        int n  = salary.size();
        int ans = 0;

        for(int i = 0;i<n;i++){
            ans += salary[i];
            maxnum = max(maxnum,salary[i]) ;
            minnum = min(minnum,salary[i]);
        }
        return (double)(ans - minnum - maxnum)/(n-2);
    }
};