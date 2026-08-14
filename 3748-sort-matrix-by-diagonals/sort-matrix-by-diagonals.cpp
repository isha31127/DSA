class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        unordered_map<int,vector<int>> topTriangle;
        unordered_map<int,vector<int>> bottomTriangle;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i >= j){
                    bottomTriangle[i-j].push_back(grid[i][j]);
                }
                else{
                    topTriangle[i-j].push_back(grid[i][j]);
                }
            }
        }
        for(auto &it : topTriangle){
            sort(it.second.begin(),it.second.end());
        }
        for(auto &it : bottomTriangle){
            sort(it.second.begin(),it.second.end(),greater<int>());
        }
        for(int i = n-1; i >= 0; i--){
            for(int j = n-1; j >=0; j--){
                if(i >= j){
                    grid[i][j] = bottomTriangle[i-j].back();
                    bottomTriangle[i-j].pop_back();
                }
                else{
                    grid[i][j] = topTriangle[i-j].back();
                    topTriangle[i-j].pop_back();
                }
            }
        }
        return grid;
    }
};