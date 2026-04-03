/*
 * @lc app=leetcode id=81 lang=cpp
 *
 * [81] Search in Rotated Sorted Array II
 */

// @lc code=start
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int lo =0;
        int hi = n-1;

        while(lo<=hi){
            int mid =(lo+hi)>>1;
            if(nums[mid]==target)return true;
            if(nums[lo]==nums[mid] and nums[mid]==nums[hi]){
                lo++,hi--;
            }
            else if(nums[lo]<=nums[mid]){
                if(nums[lo]<=target && nums[mid]>=target)
                    hi = mid-1;
                else lo =mid+1;
            }else{
                if(nums[mid]<=target && nums[hi]>=target)
                   lo = mid+1;
                else hi = mid-1;
            }
        }
        return false;
    }
};
// @lc code=end

