class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        auto p = minmax_element(nums.begin(), nums.end());
        int minele = *p.first;
        int maxele = *p.second;
        unordered_set<int> numSet(nums.begin(), nums.end());
        for (int i = minele + 1; i < maxele; i++) {
            if (numSet.find(i) == numSet.end()) {
                ans.push_back(i); 
            }
        }
    return ans;
    }
};