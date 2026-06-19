/*
 * @lc app=leetcode id=1732 lang=cpp
 *
 * [1732] Find the Highest Altitude
 */

// @lc code=start
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int max_ans =0;
        int sum =0;
        for(int i=0;i<n;i++){
            sum+=gain[i];
            max_ans = max(max_ans,sum);
        }
        return max_ans;
    }
};
// @lc code=end

