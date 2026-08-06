class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            mp[nums[i]]++;
        }
        vector<pair<int,int>> freq;
        for(auto x : mp){
            freq.push_back(x);
        }
        sort(freq.begin(),freq.end(),
        [](auto a,auto b){
            if(a.second == b.second) return a.first > b.first;
            return a.second > b.second;
        });
        vector<int> ans;
        for(int i = 0; i < k; i++){
            ans.push_back(freq[i].first);
        }
        return ans;
    }
};