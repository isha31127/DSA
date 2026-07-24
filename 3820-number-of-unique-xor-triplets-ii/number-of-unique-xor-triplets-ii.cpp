class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> xorPair;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                xorPair.insert(nums[i] ^ nums[j]);
            }
        }
        unordered_set<int> ans;
        for(int p : xorPair){
            for(int x : nums){
                ans.insert(p ^ x);
            }
        }
        return ans.size();
    }
};