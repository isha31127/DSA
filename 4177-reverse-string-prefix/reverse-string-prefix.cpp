class Solution {
public:
    string reversePrefix(string s, int k) {
        if(k == 1) return s;
        int i = 0;
        int j = k-1;
        while(i < j){
            char c = s[i];
            s[i] = s[j];
            s[j] = c;
            i++;
            j--;
        }
        return s;
    }
};