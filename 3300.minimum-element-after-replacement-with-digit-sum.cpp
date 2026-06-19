/*
 * @lc app=leetcode id=3300 lang=cpp
 *
 * [3300] Minimum Element After Replacement With Digit Sum
 */

// @lc code=start
class Solution {
public:
    int minElement(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MAX;
        for(int i=0;i<n;i++){
            int sum =0;
            string str = to_string(nums[i]);
            for(auto nei:str){
                sum+=(nei-'0');
            }
            ans = min(ans,sum);
        }
        return ans;
    }
};
// @lc code=end

