class Solution {
public:
    bool is_cycle(vector<vector<int>> &vis, int row, int col, vector<vector<char>> &grid) {
        int n = grid.size();
        int m = grid[0].size();

        queue<tuple<int,int,int,int>> q;
        // (current_row, current_col, parent_row, parent_col)
        q.push({row, col, -1, -1});

        vis[row][col] = 1;

        vector<vector<int>> dir = {{0,1},{0,-1},{1,0},{-1,0}};

        while(!q.empty()){
            auto [i, j, pi, pj] = q.front();
            q.pop();

            for(auto &d : dir){
                int ni = i + d[0];
                int nj = j + d[1];

                if(ni>=0 && nj>=0 && ni<n && nj<m && grid[ni][nj] == grid[row][col]){

                    if(!vis[ni][nj]){
                        vis[ni][nj] = 1;
                        q.push({ni, nj, i, j});
                    }
                    else if(!(ni == pi && nj == pj)){
                        // cycle found
                        return true;
                    }
                }
            }
        }
        return false;
    }

    bool containsCycle(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> vis(n, vector<int>(m, 0));

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(!vis[i][j]){
                    if(is_cycle(vis, i, j, grid)) return true;
                }
            }
        }
        return false;
    }
};