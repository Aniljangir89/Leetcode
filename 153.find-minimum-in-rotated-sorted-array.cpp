/*
 * @lc app=leetcode id=153 lang=cpp
 *
 * [153] Find Minimum in Rotated Sorted Array
 */

// @lc code=start
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int lo=0,hi=n-1;
        if(nums[lo]<=nums[hi])return nums[lo];
        int ans = INT_MAX;
        while(lo<=hi){
            int mid = (lo+hi)>>1;
            if(nums[lo]<nums[mid]){
                ans = min(ans,nums[lo]);
                lo = mid+1;
            }else{
                hi = mid-1;
            }
        }
        return ans;
    }
};
// @lc code=end

