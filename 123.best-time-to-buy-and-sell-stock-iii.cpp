/*
 * @lc app=leetcode id=123 lang=cpp
 *
 * [123] Best Time to Buy and Sell Stock III
 */

// @lc code=start
class Solution {
public:
    int f(vector<int>& prices,int i, int can,int k,vector<vector<vector<int>>>&dp){
        int n = prices.size();
        if(i>=n)return 0;
        int a=0,b=0;
        if(k<0)return 0;
        if(dp[i][can][k]!=-1)return dp[i][can][k];
        if(can ){
            a = - prices[i] + f(prices,i+1,0,k,dp);
            b = f(prices,i+1,1,k,dp);
        }else{
            a = prices[i] + f(prices,i+1,1,k-1,dp);
            b = f(prices,i+1,0,k,dp);
        }
        return dp[i][can][k]= max(a,b);
    }
    int maxProfit(vector<int>& prices) {
        int n  = prices.size();
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(3,-1)));
        return f(prices,0,1,1,dp);
    }
};
// @lc code=end

