class Solution {
public:
    long long maxSum(vector<int>& nums, int m, int k) {
        long long ans = 0;
        long long s = 0;
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i = 0; i < k; i++){
            s += nums[i];
            mp[nums[i]]++;
        }
        if(mp.size() >= m)ans = max(ans,s);
        for(int i = 1; i <= n - k; i++){
            s -= nums[i-1];
            mp[nums[i-1]]--;
            if(mp[nums[i-1]] == 0)mp.erase(nums[i-1]);
            s += nums[i+k-1];
            mp[nums[i+k-1]]++;
            if(mp.size() >= m)ans = max(ans,s);
        }
        return ans;
    }
};