class Solution {
public:
    string smallestPalindrome(string s) {
        int l = s.length();
        int mid = l/2;
        sort(s.begin(),s.begin()+mid);
        for(int i = 0; i < mid; i++){
            s[l-1-i] = s[i];
        }
        return s;
    }
};