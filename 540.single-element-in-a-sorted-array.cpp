/*
 * @lc app=leetcode id=540 lang=cpp
 *
 * [540] Single Element in a Sorted Array
 */

// @lc code=start
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int lo = 0,hi = n -1;
        if(n==1)return nums[0];
        while(lo<hi){
            int mid = (lo+hi)>>1;
            if(mid%2==1){
                mid--;
            }
            if(nums[mid]==nums[mid+1]){
                lo = mid+2;
            }else{
                hi = mid;
            }
        }
        return nums[lo];
    }
};
// @lc code=end

