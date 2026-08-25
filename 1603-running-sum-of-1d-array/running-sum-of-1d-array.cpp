class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        if(n == 1) return nums;
        ans.push_back(nums[0]);
        int s = nums[0];
        for(int i = 1; i < n; i++){
            s += nums[i];
            ans.push_back(s);
        }
        return ans;
    }
};