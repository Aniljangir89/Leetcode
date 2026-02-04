/*
 * @lc app=leetcode id=3637 lang=cpp
 *
 * [3637] Trionic Array I
 */

// @lc code=start
class Solution {
public:

  bool check(vector<int>& nums, int p, int q) {
    int n = nums.size();

    // middle decreasing
    for(int i = p+1; i <= q; i++){
        if(nums[i] >= nums[i-1]) return false;
    }

    for(int i = 1; i <= p; i++){
        if(nums[i] <= nums[i-1]) return false;
    }

    // third increasing
    for(int i = q+1; i < n; i++){
        if(nums[i] <= nums[i-1]) return false;
    }

    return true;
}

    bool isTrionic(vector<int>& nums) {
        int n  = nums.size();
        for(int i=1;i<n-1;i++){
            for(int j=i+1;j<n-1;j++){
                if(check(nums,i,j))return true;
                
            }
        }
        return false;
    }
};
// @lc code=end

