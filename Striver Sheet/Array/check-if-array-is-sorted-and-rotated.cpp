#include<iostream>
using namespace std;

bool check(vector<int>& nums) {
  int n = nums.size();
  int count = 0;
  for(int i = 0;i<n;i++){
      if(nums[i] > nums[(i+1)%n])count++;
  }
  return count<=1;
}
int main(){
  int n;
  cin>>n;
  vector<int> nums(n);
  for(int i = 0;i<n;i++){
    cin>>nums[i];
  }
  cout<< check(nums)<<endl;
  return 0;
}
