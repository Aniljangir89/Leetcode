/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int>suff(n,0);
        suff[n-1] = 0;
        for(int i = n-2;i>=0;i--){
            suff[i] = max(prices[i+1],suff[i+1]);
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            ans = max(ans,suff[i]-prices[i]);
        }
        return ans;
    }
};
// @lc code=end

