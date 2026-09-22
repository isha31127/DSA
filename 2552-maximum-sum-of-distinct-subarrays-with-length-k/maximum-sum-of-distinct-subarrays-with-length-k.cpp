class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long ans = 0;
        long long s = 0;
        unordered_map<int,int> mp;
        int n = nums.size();
        for(int i = 0; i < k; i++){
            mp[nums[i]]++;
            s += nums[i];
        }
        if(mp.size() == k)ans = max(ans,s);
        for(int i = 1; i <= n-k; i++){
            s -= nums[i-1];
            mp[nums[i-1]]--;
            if(mp[nums[i-1]] == 0) mp.erase(nums[i-1]);
            s += nums[i+k-1];
            mp[nums[i+k-1]]++;
            if(mp.size() == k)ans= max(ans,s);
        }
        return ans;
    }
};