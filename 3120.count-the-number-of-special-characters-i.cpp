/*
 * @lc app=leetcode id=3120 lang=cpp
 *
 * [3120] Count the Number of Special Characters I
 */

// @lc code=start
class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n = word.size();
        int ans =0;
        vector<int>lower(26,0);
        vector<int>upper(26,0);
        for(auto ch :word){
            if(ch>= 'a' && ch<= 'z'){
                lower[ch-'a'] =1;
            }
            else{
                upper[ch-'A'] =1;
            }
        }
        for(int i=0;i<26;i++){
            if(lower[i] && upper[i]){
                ans++;
            }
        }
        return ans;
    }
};
// @lc code=end

