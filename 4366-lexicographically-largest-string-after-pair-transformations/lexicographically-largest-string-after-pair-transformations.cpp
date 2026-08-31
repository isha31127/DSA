class Solution {
public:
    vector<string> largestString(vector<int>& nums) {
        vector<string> ans;
        for(int num : nums){
            string s;
            int z = num/(1 << 25);
            s += string(z,'z');
            num %= (1 << 25);
            for(int i = 24;i >= 0; i--){
                if(num & (1 << i)) s += char('a' + i);
            }
            ans.push_back(s);
        }
        return ans;
    }
};