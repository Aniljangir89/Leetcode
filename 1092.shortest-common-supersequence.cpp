/*
 * @lc app=leetcode id=1092 lang=cpp
 *
 * [1092] Shortest Common Supersequence 
 */

// @lc code=start
class Solution {
public:
     int f(string &s,string &t,int i,int j,vector<vector<int>>&dp){
        int n = s.size();
        int m = t.size();
        if(i>=n or j>=m)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        if(s[i]==t[j]){
            return dp[i][j] = 1+ f(s,t,i+1,j+1,dp);
        }
        return dp[i][j] = max(f(s,t,i+1,j,dp),f(s,t,i,j+1,dp));
    }
    string shortestCommonSupersequence(string str1, string str2) {
       int n = str1.size();
       int m = str2.size();
       vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        f(str1,str2,0,0,dp);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(dp[i][j]==-1){
                    dp[i][j]=0;
                }
            }
        }
        int i =0,j=0;
        string ans = "";
        while(i<n and j<m){
            if(str1[i]==str2[j]){
                ans+=str1[i];
                i++;
                j++;
            }
            else{
                if(dp[i+1][j] > dp[i][j+1]){
                    ans+=str1[i];
                    i++;
                }
                else{
                    ans+=str2[j];
                    j++;
                }
            }
        }
        while(i<n)ans+=str1[i++];
        while(j<m)ans+=str2[j++];
        return ans;
    }
};
// @lc code=end

