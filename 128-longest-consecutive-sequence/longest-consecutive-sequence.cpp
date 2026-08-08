class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        int c = 1;
        int ans = 1;
        sort(nums.begin(),nums.end());
        for(int i =  1; i < n; i++){
            if(nums[i] - nums[i-1] == 1)c++;
            else if(nums[i] == nums[i-1]) continue;
            else if(nums[i] - nums[i-1] > 1){
                c = 1;
            }
            ans = max(c,ans);
        }
        return ans;
    }
};