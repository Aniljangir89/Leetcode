/*
 * @lc app=leetcode id=198 lang=cpp
 *
 * [198] House Robber
 */

// @lc code=start
class Solution {
public:
    int f(vector<int>&nums,int i,vector<int>&dp){
        int n = nums.size();
        if(i>=n)return 0;
        int take =0,notake=0;
        if(dp[i]!=-1)return dp[i];
        take = nums[i]+f(nums ,i+2,dp);
        notake = f(nums,i+1,dp);
        return dp[i]=max(take,notake);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n+1,-1);
        return f(nums,0,dp);
    }
};
// @lc code=end

