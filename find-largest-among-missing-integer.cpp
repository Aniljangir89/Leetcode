// 3471. Find the Largest Almost Missing Integer
// You are given an integer array nums and an integer k.
// An integer x is almost missing from nums if x appears in exactly one subarray of size k within nums.
// Return the largest almost missing integer from nums. If no such integer exists, return -1.
// A subarray is a contiguous sequence of elements within an array.
// Example 1:
// Input: nums = [3,9,2,1,7], k = 3
// Output: 7
// Explanation:
// 1 appears in 2 subarrays of size 3: [9, 2, 1] and [2, 1, 7].
// 2 appears in 3 subarrays of size 3: [3, 9, 2], [9, 2, 1], [2, 1, 7].
// 3 appears in 1 subarray of size 3: [3, 9, 2].
// 7 appears in 1 subarray of size 3: [2, 1, 7].
// 9 appears in 2 subarrays of size 3: [3, 9, 2], and [9, 2, 1].
// We return 7 since it is the largest integer that appears in exactly one subarray of size k.
// Example 2:
// Input: nums = [3,9,7,2,1,7], k = 4
// Output: 3
// Explanation:
// 1 appears in 2 subarrays of size 4: [9, 7, 2, 1], [7, 2, 1, 7].
// 2 appears in 3 subarrays of size 4: [3, 9, 7, 2], [9, 7, 2, 1], [7, 2, 1, 7].
// 3 appears in 1 subarray of size 4: [3, 9, 7, 2].
// 7 appears in 3 subarrays of size 4: [3, 9, 7, 2], [9, 7, 2, 1], [7, 2, 1, 7].
// 9 appears in 2 subarrays of size 4: [3, 9, 7, 2], [9, 7, 2, 1].
// We return 3 since it is the largest and only integer that appears in exactly one subarray of size k.
// Example 3:
// Input: nums = [0,0], k = 1
// Output: -1
// Explanation:
// There is no integer that appears in only one subarray of size 1.
// Constraints:
// 1 <= nums.length <= 50
// 0 <= nums[i] <= 50
// 1 <= k <= nums.length
#include<iostream>
using namespace std;
bool check(vector<int> &nums,int k,int val){
  int  n = nums.size();
  int ans = 0;
  int count_value = 0;
  int i = 0,j = 0;
  while(i<n){
    if(nums[i]==val){
      count_value++;
    }
    if(i-j+1==k){
      if(count_value >= 1) ans++;
      if(nums[j]==val){
        count_value--;
      }
      j++;
    }
    return ans==k;
  }
}
int func(vector<int> &nums,int k){
  int n =  nums.size();
  vector<int> nums1 = nums;
  sort(begin(nums1),end(nums1));
  for(int i= n-1;i>=0;i-- ){
    if(check(nums,k,nums1[i]))return nums1[i];
  }
  return -1;
}
int main(){
  int n,k;
  cin>>n>>k;
  vector<int> nums(n);
  for(int i= 0;i<n;i++){
    cin>>nums[i];
  }
  int ans  =  func(nums,k);
  cout<<ans<<endl;
  return 0;
}
