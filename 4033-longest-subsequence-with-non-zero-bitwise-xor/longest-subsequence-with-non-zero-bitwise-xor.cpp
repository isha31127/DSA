class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int totalXor = 0;
        bool hasNonZero = false;
        for(int num : nums){
            totalXor ^= num;
            if(num != 0) hasNonZero = true;
        }
        if(!hasNonZero) return 0; //all elements are 0;
        if(totalXor != 0) return n; // all element's xor is not zero
        return n-1; //total xor is 0 so remove one non-zero element
    }
};