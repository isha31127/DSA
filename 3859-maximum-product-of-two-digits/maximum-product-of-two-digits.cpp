class Solution {
public:
    int maxProduct(int n) {
        
       string s = to_string(n);
       sort(s.begin(),s.end());
       int l = s.length();
       int a = s[l - 1] - '0';
       int b = s[l - 2] - '0';
       return a * b;
    }
};