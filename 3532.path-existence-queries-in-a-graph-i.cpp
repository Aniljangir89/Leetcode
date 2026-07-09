/*
 * @lc app=leetcode id=3532 lang=cpp
 *
 * [3532] Path Existence Queries in a Graph I
 */

// @lc code=start
class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
        int n = num.size();
        int m = queries.size();
        vector<int> comp(n,0);
        comp[0] = 0;
        for(int j = 1; j<n ;j++){
            comp[j] = comp[j -1];
            if(nums[j] - nums[j] > maxDiff){
                comp[j]++;
            }
        }
        vector<bool>ans(m,False);
        for(int i = 0 ;i<m;i++){
            int l = queries[i][0];
            int r = queries[i][1];
            if(comp[l] == comp[r]){
                ans[i] = True;
            }
        }
        return ans;
    }
};
// @lc code=end

