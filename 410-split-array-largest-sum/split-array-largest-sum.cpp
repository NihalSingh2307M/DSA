class Solution {
public:
     
    bool isValid(vector<int>& arr, int n, int m, int maxallow){
        int stu = 1;
        int pages = 0;

        for(int i = 0; i < n; i++){
            if(arr[i] > maxallow) return false;

            if(pages + arr[i] <= maxallow){
                pages += arr[i];
            }else{
                stu++;
                pages = arr[i];
            }
        }
        return stu <= m;
    }

    int splitArray(vector<int>& arr, int m) {

        int n = arr.size();
        int sum = 0;
        int  mx = 0;

        for(int i = 0; i < n; i++){
            sum += arr[i];
            mx = max(mx, arr[i]);
        }
        int ans = -1;
        int st = mx;
        int end = sum;
        while(st <= end){
            int mid = st + (end - st) / 2;

            if(isValid(arr, n, m, mid)){
                ans = mid;
                end = mid - 1;
            }else{
                st = mid + 1;
            }
        }
        return ans;
    }
};