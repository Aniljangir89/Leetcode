/*
 * @lc app=leetcode id=2515 lang=cpp
 *
 * [2515] Shortest Distance to Target String in a Circular Array
 */

// @lc code=start
/*
 * @lc app=leetcode id=2515 lang=cpp
 *
 * [2515] Shortest Distance to Target String in a Circular Array
 */

// @lc code=start
class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n = words.size();
        int rfirst = 1e9;
        int rsecond = 1e9;
        if (words[startIndex] == target)
            return 0;
        for (int i = startIndex; i < n; i++) {
            if (target == words[i]) {
                if (rfirst == 1e9) {
                    rfirst = i;
                    rsecond = i;
                } else {
                    rsecond = i;
                }
            }
        }
        int lfirst = 1e9;
        int lsecond = 1e9;
        for (int j = startIndex; j >= 0; j--) {
            if (target == words[j]) {
                if (lfirst == 1e9) {
                    lfirst = j;
                    lsecond = j;
                } else {
                    lsecond = j;
                }
            }
        }
        int ans = 1e9;
        int left_dist = 1e9;
        int right_dist = 1e9;
        if (lfirst != 1e9) {
            left_dist = startIndex - lfirst;
        } else {
            if (rsecond != 1e9) {
                left_dist = startIndex + n - rsecond;
            }
        }
        if (rfirst != 1e9) {
            right_dist = rfirst - startIndex;
        } else {
            if (lsecond != 1e9) {
                right_dist = n - startIndex + lsecond;
            }
        }

        ans = min(left_dist, right_dist);
        return ans == 1e9 ? -1 : ans;
    }
};


// @lc code=end

