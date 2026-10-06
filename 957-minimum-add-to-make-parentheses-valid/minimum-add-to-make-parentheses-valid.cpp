class Solution {
public:
    int minAddToMakeValid(string s) {
        int n = s.length();
        int lp = 0;
        int rp = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='(')
            lp++;
            else if(s[i]==')'){
                if(lp>0){
                    lp--;
                }
                else{
                    rp++;
                }
            }
        }
        return lp+rp;
    }
};