// Given a binary array nums, return the maximum number of consecutive 1's in the array.
// Example 1:
// Input: nums = [1,1,0,1,1,1]
// Output: 3
// Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
// Example 2:
// Input: nums = [1,0,1,1,0,1]
// Output: 2
// Constraints:
// 1 <= nums.length <= 105
// nums[i] is either 0 or 1.
//

#include<iostream>
using namespace std;
int func(vector<int> &nums){
  int n = nums.size();
  int i=0;
  int sum = 0,ans = 0;
  for(int i = 0;i<n;i++){
    if(nums[i]==1){
      sum++;
    }else{
      ans = max(ans,sum);
      sum = 0;
    }
  }
  return ans;
}

int main(){
  int n;
  cin>>n;
  vector<int> nums(n);
  for(int i = 0;i<n;i++){
    cin>>nums[i];
  }
  int ans = func(nums);
  cout<<ans<<endl;
  return 0;
}
