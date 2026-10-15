// You are given an array prices where prices[i] is the price of a given stock on the ith day.
// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
// Example 1:
// Input: prices = [7,1,5,3,6,4]
// Output: 5
// Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
// Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
// Example 2:
// Input: prices = [7,6,4,3,1]
// Output: 0
// Explanation: In this case, no transactions are done and the max profit = 0.
// Constraints:
// 1 <= prices.length <= 105
// 0 <= prices[i] 
//
#include<iostream>
using namespace std;
int func(vector<int> & nums){
  int n = nums.size();
  vector<int> prefix(n,0),sufix(n,0);
  prefix[0] = nums[0];
  sufix[n-1] = nums[n-1];
  for(int i = 1;i<n;i++) prefix[i] = max(prefix[i-1],nums[i]);
  for(int i = n-1;i>=0;i--) sufix[i] = max(sufix[i+1],nums[i]);
  int ans= 0;
  for(int i = 0;i<n;i++){
    ans = max(ans,sufix[i] - nums[i]);
  }
  return ans;
}
int main(){
  int n;
  cin>>n;
  vector<int> nums(n);
  for(int i = 0;i<n;i++)cin>>nums[i];
  int ans = func(nums);
  cout<<ans<<endl;
  return 0;
}
