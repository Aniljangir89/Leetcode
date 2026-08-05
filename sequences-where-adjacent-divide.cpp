// Given two positive integer n and m. Find the number of arrays of size n that can be formed such that:
// Each element is in the range [1, m].
// All adjacent are such that one of them divide the another i.e element Ai divides Ai + 1 or Ai+1 divides Ai.
// Examples:
// Input: n = 3, m = 3
// Output : 17
// Explanation: The possible arrays are [1, 1, 1], [1, 1, 2], [1, 1, 3], [1, 2, 1], [1, 2, 2], [1, 3, 1], [1, 3, 3], [2, 1, 1], [2, 1, 2], [2, 1, 3], [2, 2, 1], [2, 2, 2], [3, 1, 1], [3, 1, 2], [3, 1, 3], [3, 3, 1] and [3, 3, 3].
// Input: n = 1, m = 10 
// Output: 10
// Explanation: The possible arrays are [1], [2], [3], [4], [5], [6], [7], [8], [9] and [10].
//
// Constraints:
//
// 1 ≤ n ≤ 11
// 1 ≤ m ≤ 11
//

#include<iostream>
using namespace std;
class Solution {
public:
    int MOD = 1e9 + 7;
    int solve(int pos, int prev, int n, int m, vector<vector<int>> &dp) {
        if (pos == n)
            return 1;
        if (dp[pos][prev] != -1)
            return dp[pos][prev];
        long long ans = 0;
        for (int cur = 1; cur <= m; cur++) {
            if (prev == 0 || prev % cur == 0 || cur % prev == 0) {
                ans += solve(pos + 1, cur, n, m, dp);
                ans %= MOD;
            }
        }
        return dp[pos][prev] = ans;
    }
    int count(int n, int m) {
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
        return solve(0, 0, n, m, dp);
    }
};
int main(){
  m;
  cin>>n>>m;
  int ans =  count(n,m);
  return 0;
}
