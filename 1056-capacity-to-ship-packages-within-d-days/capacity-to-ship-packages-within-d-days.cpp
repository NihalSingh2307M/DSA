class Solution {
public:
 
    bool canShip(vector<int>&weights,int maxCapacity,int days){
    int reqDays  = 1;
    int currLoad = 0;

    for(int packWeight : weights){
        if(currLoad + packWeight <= maxCapacity){
            currLoad += packWeight;
        }else{
            reqDays++;
            currLoad = packWeight;
        }
    }

    return reqDays <= days;

}

    int shipWithinDays(vector<int>& weights, int days) {
        int left =0;
        int right = 0;

        for(int packWeight : weights){
            left =  max(left,packWeight);
            right += packWeight;
        }

        while(left<=right){
            int mid = left + (right-left)/2;

            if(canShip(weights,mid,days)){
                right = mid -1;
            }else{
                left = mid+1;
            }
        }
        return left;
    }
};