class Solution {
public:
    string reverseVowels(string s) {
        int i = 0; 
        int l = s.length();
        int j = l - 1;
        string vowel = "aeiouAEIOU";
        while(i < j){
            if(vowel.contains(s[i]))
            {
                if(vowel.contains(s[j])){
                    char temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                    i++;
                    j--;
                }
                else{
                    j--;
                }
            }
            else{
                i++;
            }
        }
        return s;
    }
};