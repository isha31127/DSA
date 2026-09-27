class Solution {
public:
    string reverseParentheses(string s) {
        string ans;
        stack<char> st;
        int n = s.length();
        for(int i = 0; i < n;i++){
            if(s[i] == ')'){
                string temp;
                while(st.top() != '('){
                    char c = st.top();
                    temp += c;
                    st.pop();
                }
                st.pop();
                for(char c : temp){
                    st.push(c);
                }
            }
            else{
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};