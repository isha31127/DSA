class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n = rocks.size();
        int c = 0;
        vector<int> diff(n);
        for(int i = 0;i < n; i++){
            diff[i] = capacity[i] - rocks[i];
            
        }
        sort(diff.begin(),diff.end());
        for(int i = 0; i < n; i++){
            if(diff[i] <= additionalRocks){
                additionalRocks -= diff[i];
                c++;
            }
        }
        return c;
    }
};