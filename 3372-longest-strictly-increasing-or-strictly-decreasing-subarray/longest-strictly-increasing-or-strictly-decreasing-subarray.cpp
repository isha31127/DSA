class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int ans = 1;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            int j = i + 1;
            int inc = 1;
            while(j < n && nums[j] > nums[j-1]){
                inc++;
                j++;
            }
            j = i+1;
            int dec = 1;
            while(j < n && nums[j] < nums[j-1]){
                dec++;
                j++;
            }
            ans = max({ans,inc,dec});
        }
        return ans;
    }
};