/*
 * @lc app=leetcode id=162 lang=cpp
 *
 * [162] Find Peak Element
 */

// @lc code=start
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int lo = 0,hi = n -1;
        while(lo<hi){
            int mid =(lo+hi)>>1;
            int left = mid==0?-1e9:mid-1;
            int right = mid==n-1?-1e9:mid+1;
            if(nums[left]<nums[mid] && nums[mid]>nums[hi])return nums[mid];
            else if(right>nums[mid])lo = mid+1;
            else hi = mid-1;
         
        }
        return nums[lo];
    }
};
// @lc code=end

