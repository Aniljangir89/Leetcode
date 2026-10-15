// 169. Majority Element
// Solved
// Easy
// Topics
// premium lock icon
// Companies
// Given an array nums of size n, return the majority element.
// The majority element is the element that appears more than ⌊n / 2⌋ times. 
// You may assume that the majority element always exists in the array.
// Example 1:
// Input: nums = [3,2,3]
// Output: 3
// Example 2:
// Input: nums = [2,2,1,1,1,2,2]
// Output: 2
// Constraints:
// n == nums.length
// 1 <= n <= 5 * 104
// -109 <= nums[i] <= 109
// The input is generated such that a majority element will exist in the array.
// Follow-up: Could you solve the problem in linear time and in O(1) space?
//
#include<iostream>
using namespace std;
int func(vector<int> &nums){
  int n = nums.size();
  int a = -1,count = 0;
  for(int i = 0;i<n;i++){
    if(count == 0){
      a = nums[i];
      count = 1;
    }else if(nums[i] == a){
      count++;
    }else{
      count--;
    }
  }
  return a;
}
int main(){

  int n;
  cin>> n;
  vector<int> nums(n);
  for(int i = 0;i<n;i++){
    cin>>nums[i];

  }

  int ans  = func(nums);
  cout<<ans<<endl;
  return 0;
}
