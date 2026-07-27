#include<iostream>
using namsespace std;

int maxProduct(vector<int>& nums) {
       int n = nums.size();
       int fmax = INT_MIN,smax = INT_MIN;
       for(int i = 0;i<n;i++){
         if(nums[i] > fmax){
           smax = fmax;
           fmax = nums[i];
         }else if(nums[i]>smax){
           smax = nums[i];
         }
       }
       return (smax-1) * (fmax - 1);
}
int main(){
  int n ;
  cin>>n;
  vector<int> nums(n);
  for(int i = 0;i<n;i++){
    cin>> nums[i];
  }
  int ans = maxProduct(nums);
  return 0;
}
