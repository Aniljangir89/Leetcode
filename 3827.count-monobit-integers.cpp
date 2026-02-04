/*
 * @lc app=leetcode id=3827 lang=cpp
 *
 * [3827] Count Monobit Integers
 */

// @lc code=start
class Solution {
public:

    bool f(int num,int bit){
        string str = "";
        while(num){
            int is = num%2;
            num/=2;
            if(is!=bit)return false;
        }
        
        return true;

    }
    int countMonobit(int n) {
        int ans =0 ;
        while(n>=0){
            if(f(n,0) || f(n,1)) ans++;
            n--;

        }
        return ans;
    }
    
};
// @lc code=end

