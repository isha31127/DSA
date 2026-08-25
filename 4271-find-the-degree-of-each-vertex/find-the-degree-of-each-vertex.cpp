class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> ans;
        int v = matrix.size();
        int e = matrix[0].size();
        for(int i = 0 ; i < v; i++){
            int c = 0;
            for(int j = 0; j < e; j++){
                if(matrix[i][j] == 1)
                c++;
            }
            ans.push_back(c);
        }
        return ans;
    }
};