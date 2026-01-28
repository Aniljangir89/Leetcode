/*
 * @lc app=leetcode id=733 lang=cpp
 *
 * [733] Flood Fill
 */

// @lc code=start
class Solution {
public:
    void dfs(vector<vector<int>>&vis,vector<vector<int>>&nums,int row,int col,int color){
        vis[row][col] = 1;
        int n = nums.size();
        int m = nums[0].size();
        vector<vector<int>>dir = {{0,1},{1,0},{-1,0},{0,-1}};
        for(int i =0 ;i<4;i++){
            int nr = row+dir[i][0];
            int nc = col+dir[i][1];
            if(nr>=0 && nc>=0 && nr<n && nc<m && !vis[nr][nc] && nums[nr][nc]==color){
                dfs(vis,nums,nr,nc,color);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n  = image.size();
        int m  = image[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        dfs(vis,image,sr,sc,image[sr][sc]);
        
        for(int i=0 ;i<n;i++){
            for(int j =0;j<m;j++){
                cout<<vis[i][j]<<" ";
                if(vis[i][j]){
                    image[i][j]=color;
                }
            }
            cout<<endl;
        }
        return image;
    }
};
// @lc code=end

