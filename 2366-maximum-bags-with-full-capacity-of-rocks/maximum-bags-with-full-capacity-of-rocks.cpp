class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n = rocks.size();
        int c = 0;
        unordered_map<int,int>mp;
        for(int i = 0; i < n; i++){
            int d = capacity[i] - rocks[i];
            mp[i] = d;
        }
        vector<pair<int,int>> vec1(mp.begin(),mp.end());
        sort(vec1.begin(),vec1.end(),[](const auto& a,const auto& b){
            return a.second < b.second;
        });
        for(const auto& [key,value] : vec1){
            if(value <= additionalRocks){
            additionalRocks -= value;
            c++;
            }
        }
        return c;
    }
};