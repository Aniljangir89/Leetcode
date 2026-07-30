/*
 * @lc app=leetcode id=3754 lang=cpp
 *
 * [3754] Concatenate Non-Zero Digits and Multiply by Sum I
 */

// @lc code=start
class Solution {
public:
    long long sumAndMultiply(int n) {
        string str = to_string(n);
        string x = "";
        for(char ch:str){
            if(ch!='0'){
                x+=ch;
            }
        }
        int xsum = 0;
        for(char ch : x){
            xsum+=(ch-'0');
        }
        return xsum * (x - '0');
    }
};
// @lc code=end

