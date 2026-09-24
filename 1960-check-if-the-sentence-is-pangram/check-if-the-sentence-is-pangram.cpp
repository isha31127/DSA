class Solution {
public:
    bool checkIfPangram(string sentence) {
        int l = sentence.length();
        if(l < 26)return false;
        set<int> st;
        for(int i = 0; i < l; i++){
            st.insert(sentence[i]);
        }
        return st.size()==26;
    }
};