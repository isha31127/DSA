class Solution {
public:
    vector<vector<long long>> dp = vector<vector<long long>>(1001, vector<long long>(1001, -1));
    unsigned long long solve(string& s, string& t,int i, int j){
        if(j == t.length())return 1;
        if(i == s.length())return 0;
        if(dp[i][j] != -1) return dp[i][j];
        if(s[i] == t[j]){
            return dp[i][j] = solve(s,t,i+1,j+1) + solve(s,t,i+1,j);
        }
        else return dp[i][j] =  solve(s,t,i+1,j);
        return -1;
    }
    int numDistinct(string s, string t) {
        return solve(s,t,0,0);
    }
};