/*
 * @lc app=leetcode id=115 lang=cpp
 *
 * [115] Distinct Subsequences
 */

// @lc code=start
class Solution {
public:
    int f(string &s,string &t,int i,int j,vector<vector<int>>&dp){
        int n  =s.size();
        int m = t.size();
        if(j>=m){
            return 1;
        }
        if(i>=n){
            return 0;
        }
        if(dp[i][j]!=-1)return dp[i][j];
        int skip = 0,noskip=0;
        if(s[i]==t[j]){
            skip = f(s,t,i+1,j,dp);
            noskip = f(s,t,i+1,j+1,dp);
            return dp[i][j]= skip + noskip;
        }
        skip = f(s,t,i+1,j,dp);
        return dp[i][j]= skip;
    }
    int numDistinct(string s, string t) {
        int n = s.size();
        int m = t.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return f(s,t,0,0,dp);
    }
};
// @lc code=end

