class Solution {
public:
    int longestValidParentheses(string s) {
        int l = s.length();
        int ans = 0;
        if(l == 0 || l == 1 ) return 0;
        stack<int> st;
        st.push(-1);
        for(int i = 0; i < l; i++){
            if(s[i] == '('){
                st.push(i);
            }
            else {
                st.pop();
                if(st.empty()) {
                st.push(i);
                }
                else {
                    ans = max(ans, i - st.top());
                }
            }
        }
        return ans;
    }
};