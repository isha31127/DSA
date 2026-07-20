class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int s = m * n;
        k %= s;
        vector<vector<int>> ans(m, vector<int>(n));
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                int prevIndex = i*n + j;
                int currIndex = (prevIndex + k) % s;
                int currRow = currIndex / n;
                int currCol = currIndex % n ;
                ans[currRow][currCol] = grid[i][j];
            }
        }
        return ans;
    }
};