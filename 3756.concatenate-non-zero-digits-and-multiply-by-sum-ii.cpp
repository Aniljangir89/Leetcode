/*
 * @lc app=leetcode id=3756 lang=cpp
 *
 * [3756] Concatenate Non-Zero Digits and Multiply by Sum II
 */

// @lc code=start
class Solution {
public:
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        int n = s.size();
        vector<int> prefix(n, 0);
        int MOD = 1e9 + 7;
        prefix[0] = s[0] - '0';

        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + (s[i] - '0');
        }
        int m = queries.size();
        vector<int> ans(m, 0);

        map<int, string> mp;

        mp[-1] = "0";
        string t = "";

        for (int i = 0; i < n; i++) {
            if (s[i] != '0')
                t += s[i];
            mp[i] = t;
        }
        for (int i = 0; i < m; i++) {
            int l = queries[i][0];
            int r = queries[i][1];
            int substring_sum = (prefix[r] - prefix[l] + (s[l] - '0'));

            string from = mp[l - 1];
            string to = mp[r];
            long long x = 0;
            if (from.size() > to.size()) {
                x = 0;
            } else {
                while (from.size() != to.size()) {
                    from += '0';
                }
                x = (stoll(to) - stoll(from));
            }

            ans[i] = (x * substring_sum) % MOD;
        }
        return ans;
    }
};
// @lc code=end
