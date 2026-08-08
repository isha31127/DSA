class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        int ans = 1;
        unordered_set<int> st;
        for(auto x : nums){
            st.insert(x);
        }
        for(auto x : st){
            if(st.find(x-1) == st.end()){
                int curr = x;
                int c = 1;
                while(st.find(curr+1)!= st.end()){
                    c++;
                    curr += 1;
                }
            ans = max(c,ans);
            } 
        }
        return ans;
    }
};