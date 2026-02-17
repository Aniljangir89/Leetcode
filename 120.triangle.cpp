/*
 * @lc app=leetcode id=120 lang=cpp
 *
 * [120] Triangle
 */

// @lc code=start
class Solution {
public:

    int f(vector<vector<int>>& dp, vector<vector<int>>& nums, int i, int j){

        int n = nums.size();

        int m = nums[i].size();

        if(j >= m){
            return 1e9;
        }
        if(i == n-1){
            return dp[i][j] = nums[i][j];
        }

        if(dp[i][j] != -1){
            return dp[i][j];
        }

        return dp[i][j] =
            nums[i][j] +
            min(
                f(dp, nums, i+1, j),
                f(dp, nums, i+1, j+1)
            );
    }
    int minimumTotal(vector<vector<int>>& nums){
        int n = nums.size();
        vector<vector<int>> dp;
        for(int i=0;i<n;i++){
            vector<int>v(nums[i].size()+1,-1);
            dp.push_back(v);
        }
        return f(dp, nums, 0, 0);
    }
};

// @lc code=end

