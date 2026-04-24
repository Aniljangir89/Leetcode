/*
 * @lc app=leetcode id=2615 lang=cpp
 *
 * [2615] Sum of Distances
 */

// @lc code=start
class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        int n = nums.size();
        map<int, vector<int>> mp;
        for (int i = 0; i < n; i++) {
            mp[nums[i]].push_back(i);
        }
        vector<long long> ans(n, 0);
        for (auto nei : mp) {
            auto idx = nei.second;
            int m = idx.size();
            vector<long long> pfix(m, 0);
            pfix[0] = idx[0];
            for (int i = 1; i < m; i++) {
                pfix[i] = (pfix[i - 1] + idx[i]);
            }
            
            for (int i = 0; i < m; i++) {
                long long left = 0, right = 0;
                if (i > 0) {
                    left = (long long)i * idx[i] - pfix[i - 1];
                }
                if (i < m - 1) {
                    right = (pfix[m - 1] - pfix[i]) -
                            (long long)(m - i - 1) * idx[i];
                }
                ans[idx[i]] = left + right;
            }
        }
        return ans;
    }
};
// @lc code=end. 1 = 0  2  3
//                   0  2.  5
