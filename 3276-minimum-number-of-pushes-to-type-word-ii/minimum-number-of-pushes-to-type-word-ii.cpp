class Solution {
public:
    int minimumPushes(string word) {
        vector<int> charCount(26, 0);
        for(char ch : word) {
            charCount[ch - 'a']++;
        }
        sort(charCount.begin(), charCount.end(), greater<int>());
        int c = 0;
        for(int i = 0; i < 26; i++) {
            c += charCount[i] * (i / 8 + 1);
        }
        return c;
    }
};