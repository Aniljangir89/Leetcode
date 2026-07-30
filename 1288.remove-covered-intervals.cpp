/*
 * @lc app=leetcode id=1288 lang=cpp
 *
 * [1288] Remove Covered Intervals
 */

// @lc code=start
class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& nums) {
        int n = nums.size();
        vector<int>dp(n,1);
        sort(nums.begin(),nums.end(),[](vector<int>&a, vector<int> &b){
                if(a[0]==b[0])return a[1]>b[1];
        });
        
        for(int i = 0;i<n;i++){
            for(int j = i+1;j<n;j++){
                int a = nums[i][0];
                int b = nums[i][1];
                int c = nums[j][0];
                int d =nums[j][1];
                if(a<=c && b>=d){
                    dp[j] =0;
            }
        }
    }
    int ans = 0;
    for(int i = 0;i<n;i++)if(dp[i])ans++;
    return ans;
    }
};
// @lc code=end

[[1,2],[1,4],[3,4]]