// Pairs with Less Than K Diff


// Given an array arr[] of positive integers and an integer k, find the total number of pairs of 
// elements that have an absolute difference strictly less than k.
 
// Examples:
// Input : arr[] = [1, 10, 4, 2], k = 3
// Output : 2
// Explanation: We have an array arr[] = [1, 10, 4, 2] and k = 3 We can make only two pairs
//with a difference of less than 3. (1, 2) and (4, 2). So, the answer is 2.
// Input : arr[] = [2, 3, 4], k = 5
// Output : 3
// Explanation:  For the given array arr[] = [2, 3, 4] and k = 5, there are 3 valid pairs
// where the absolute difference between the pair's elements is less than 5.
// These pairs are (2, 3), (2, 4), and (3, 4). Hence, the output is 3.
// Constraints:
// 1 ≤ arr.size() ≤ 105
// 0 ≤ k ≤ 105
// 1 ≤ arr[i] ≤ 105
//
//   nums[i]-nums[lo]<=k
#include<iostream>
using namespace std;
int find_small(vector<int> &nums,int i,int k){
  int n = nums.size();
  if(i==0)return 0;
  int lo = 0, hi = i -1;
  while(lo<=hi){
    int mid =  (lo+hi)>>1;
    int diff = (nums[i] - nums[mid]);
    if(diff < k) hi = mid -1 ;
    else lo = mid + 1;
  }
  return i- lo;
}
int countPairs(vector<int> &nums,int k){
   int n = nums.size();
   sort(begin(nums),end(nums));
   int ans= 0;
   for(int i = 0;i<n;i++){
      int left_sum = find_small(nums,i,k);
      ans += (left_sum );
   }
   return ans;
}
int main(){
  int n,k;
  cin>>n>>k;
  for(int i= 0 ;i<n;i++){
    cin>>nums[i];
  }
  return 0;
}
  
