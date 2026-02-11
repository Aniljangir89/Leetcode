/*
 * @lc app=leetcode id=1796 lang=cpp
 *
 * [1796] Second Largest Digit in a String
 */

// @lc code=start
class Solution {
public:
    int secondHighest(string s) {
        int n = s.size();
        int first =-1,second =-1;
        for(char ch:s){
            int ele = ch-'0';
            if(ele>9){
                continue;
            }
            if(ele>first){
                second = first;
                first  = ele;    
            }
            else if(ele>second && ele!=first){
                second = ele;
            }
        }
        return second;
    }
};
// @lc code=end

