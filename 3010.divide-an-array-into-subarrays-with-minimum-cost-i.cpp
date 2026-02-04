/*
 * @lc app=leetcode id=3010 lang=cpp
 *
 * [3010] Divide an Array Into Subarrays With Minimum Cost I
 */

// @lc code=start
class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int n = nums.size();
        int ans =INT_MAX;
        int a = nums[0];
        for(int i =1;i<n;i++){
            int b  = nums[i];
            for(int j = i+1;j<n;j++){
               int c = nums[j];
               int curr = a+ b +c;
               ans = min(ans,curr);
            }
        }
        return ans;
    }
};
// @lc code=end

