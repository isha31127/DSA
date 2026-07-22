class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        int n = nums.size();
        int maxVal = INT_MIN;
        for(int i = 0; i < n; i++){
            maxVal = max(maxVal,nums[i]);
        }
        vector<long long> freq(maxVal + 1, 0);

        for (int x : nums){
            freq[x]++;
        }
        
        vector<long long> gcdCount(maxVal + 1, 0);
        for (int g = maxVal; g >= 1; g--) {
            long long cnt = 0;
            for (int multiple = g; multiple <= maxVal; multiple += g)
                cnt += freq[multiple];
            gcdCount[g] = cnt * (cnt - 1) / 2;
            for (int multiple = 2 * g; multiple <= maxVal; multiple += g)
                gcdCount[g] -= gcdCount[multiple];
        }
        vector<long long> prefix(maxVal + 1, 0);
        for (int i = 1; i <= maxVal; i++)
            prefix[i] = prefix[i - 1] + gcdCount[i];

        vector<int> ans;

        for (long long q : queries) {
            int g = lower_bound(prefix.begin(), prefix.end(), q + 1) - prefix.begin();
            ans.push_back(g);
        }

        return ans;
    }
};