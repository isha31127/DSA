class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
       int l = s.length();
        for(int i = k; i <= l; i++){
            string result = "";
            for(int start = 0; start <= l - i; start++){
                string temp = s.substr(start,i);
                int count1 = 0;
                for(char &ch : temp){
                    count1 += (ch == '1') ? 1 : 0;
                }
                if(count1 == k){
                    if(result.empty() || temp < result){
                        result = temp;
                    }
                }
            }
            if(!result.empty())return result;
        }
    return "";
    }
};