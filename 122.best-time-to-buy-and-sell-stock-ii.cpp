/*
 * @lc app=leetcode id=122 lang=cpp
 *
 * [122] Best Time to Buy and Sell Stock II
 */

// @lc code=start
class Solution {
public:
    int f(vector<int> & nums,int canbuy,int i,vector<vector<int>>&dp){
        int n = nums.size();
        if(i>=n){
            return 0;
        }
        if(dp[i][canbuy]!=-1)return dp[i][canbuy];
        int take=0,nottake=0;
        if(canbuy){
            take = -nums[i]+f(nums,0,i+1,dp);
            nottake = f(nums,1,i+1,dp);
        }else{
            take = nums[i]+f(nums,1,i+1,dp);
            nottake = f(nums,0,i+1,dp);
        }
        return dp[i][canbuy] = max(take,nottake);
    }
    int maxProfit(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        return f(nums,1,0,dp);
    }
};
// @lc code=end

