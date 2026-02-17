/*
 * @lc app=leetcode id=62 lang=cpp
 *
 * [62] Unique Paths
 */

// @lc code=start
class Solution {
public:
   int f(int m,int n,int i,int j,vector<vector<int>>&dp){
        if(i>=n || j>=m)
           return 0;
        if(i == n-1 && j == m-1)return 1;
        if(dp[i][j]!=-1)return dp[i][j];
        return dp[i][j]=f(m,n,i+1,j,dp)+f(m,n,i,j+1,dp);
   }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return f(m,n,0,0,dp);
    }
};
// @lc code=end

