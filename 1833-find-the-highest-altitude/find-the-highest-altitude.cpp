class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int alt = 0;
        int maxalt= 0;
        for(int g:gain){
            alt+=g;
            maxalt = max(maxalt,alt);
        }
        return maxalt;
    }
};