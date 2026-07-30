/*
 * @lc app=leetcode id=1358 lang=cpp
 *
 * [1358] Number of Substrings Containing All Three Characters
 */

// @lc code=start
class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        int count[3] = {0,0,0};
        int i = 0 ;
        int ans = 0;
        if(n < 3)return 0;
        for(int j = 0; j < n; j++){
            count[s[j]-'a']++;
            while(count[0] > 0 && count[1] > 0 && count[2] > 0){
                ans += n - j;
                count[s[i]-'a']--;
                i++;
            }
        }
    }
};
// @lc code=end

