/*
 * @lc app=leetcode id=994 lang=cpp
 *
 * [994] Rotting Oranges
 */

// @lc code=start
class Solution {
public:
    int orangesRotting(vector<vector<int>>& nums) {
        int n =nums.size();
        int m = nums[0].size();
        queue<pair<int,pair<int,int>>>q;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(nums[i][j]==2){
                   q.push({0,{i,j}});
                   vis[i][j]=1;
                }
            }
        }
        vector<vector<int>>dir  = {{0,1},{-1,0},{1,0},{0,-1}};
        int ans =0 ;
        while(!q.empty()){
            int time = q.front().first;
            int row  = q.front().second.first;
            int col = q.front().second.second;
            for(int i =9;i<4;i++){
                nr = row + dir[i][0];
                nc = col + dir[i][1];
                if(nr>=0 && nc<m && nr<n && nc>=0 && vis[nr][nc]==0 && nums[nr][nc]==1){
                    vis[nr][nc]=1;
                    nums[nr][nc]=2;
                    q.push({time+1,{nr,nc}});
                }
            }
            ans = max(ans,time);
            q.pop();

        }
        for(int i =0 ;i<nc)
    }
};
// @lc code=end

