/*
 * @lc app=leetcode id=64 lang=cpp
 *
 * [64] Minimum Path Sum
 */

// @lc code=start
class Solution {
public:
    int f(auto & dp,auto &nums,int i,int j){
        int n = nums.size();
        int m = nums[0].size();
        if(i>=n || j>=m)return INT_MAX/10;
        if(i==n-1 && j==m-1)return nums[i][j];
        if(dp[i][j]!=-1)return dp[i][j];
        return dp[i][j] = nums[i][j]+min(f(dp,nums,i+1,j),f(dp,nums,i,j+1));
    }
    int minPathSum(vector<vector<int>>& nums) {
        int n = nums.size();
        int m = nums[0].size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return f(dp,nums,0,0);
        
    }
};
// @lc code=end

