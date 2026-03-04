class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int podp = 0;
        int lastidx = arr.size() - 1;

        for(int i = 0; i <= lastidx - podp; i++){
            if(arr[i] == 0){
                if(i == lastidx - podp){
                    arr[lastidx] = 0;
                    lastidx--;  
                    break;
                }else{
                    podp++;
                }
            }
        }
        int newlast = lastidx - podp;
        for(int i = newlast; i >= 0; i--){
            if(arr[i] == 0){
                arr[i + podp] = 0;
                podp--;
                arr[i + podp] = 0;
            }else{
                arr[i + podp] = arr[i];
            }
        }
    }
};