class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int curr_sum = 0;
        unordered_map<int,int>mp;
        mp.insert({0,-1});
        for(int i = 0; i < n; i++){
           if(nums[i] == 0) curr_sum += -1;
           else curr_sum += 1;
           if(mp.find(curr_sum) != mp.end()) ans = max(ans,i - mp[curr_sum]);
           else mp[curr_sum] = i;
        }
        return ans;
    }
};