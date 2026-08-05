#include<iostream>
using namespace std;
int count(vector<int> &nums,int k){
  int  n = nums.size();
  int sum = 0;
  int left = 0,right = 0;
  while(right<n){
    sum+=nums[right];
    while(sum>k){
      sum -= (nums[left++]);
    }
    ans +=(right - left +1);
  }
  return ans;
}
int main(){
  int n,l,r;
  cin>>n>>l>>r;
  vector<int>nums(n);
  for(int i = 0;i<n;i++)cin>>nums[i];
  int ans = count(nums,r)- count(nums,l -1);
  cout<<ans<<endl;
  return 0;
}
