/*
 * @lc app=leetcode id=120 lang=cpp
 *
 * [120] Triangle
 */

// @lc code=start
class Solution {
public:

    int f(int i, int j,
          vector<vector<int>>& tri,
          vector<vector<int>>& dp){

        if(i == tri.size()-1)
            return tri[i][j];

        if(dp[i][j] != INT_MAX)
            return dp[i][j];

        return dp[i][j] =
            tri[i][j] +
            min(
                f(i+1,j,tri,dp),
                f(i+1,j+1,tri,dp)
            );
    }
    int minimumTotal(vector<vector<int>>& tri){

        int n = tri.size();

        vector<vector<int>> dp(n);

        for(int i=0;i<n;i++)
            dp[i] =
                vector<int>(tri[i].size(), INT_MAX);
        return f(0,0,tri,dp);
    }
};

// @lc code=end

