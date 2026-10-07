// You are given an array of digits called digits. Your task is to determine the number of distinct three-digit even numbers that can be formed using these digits.
// Note: Each copy of a digit can only be used once per number, and there may not be leading zeros.
//
// Example 1:
// Input: digits = [1,2,3,4]    
// Output: 12
// Explanation: The 12 distinct 3-digit even numbers that can be formed are 124, 132, 134, 142, 214, 234, 312, 314, 324, 342, 412, and 432. Note that 222 cannot be formed because there is only 1 copy of the digit 2.
// Example 2:
// Input: digits = [0,2,2]   1* 2* 1
// Output: 2
// Explanation: The only 3-digit even numbers that can be formed are 202 and 220. Note that the digit 2 can be used twice because it appears twice in the array.
// Example 3:
// Input: digits = [6,6,6] 1* 1*1
// Output: 1
// Explanation: Only 666 can be formed.
// Example 4:
// Input: digits = [1,3,5]  3 * 2 *  
// Output: 0
// Explanation: No even 3-digit numbers can be formed.
// 3 <= digits.length <= 10
// 0 <= digits[i] <= 9



#include<iostream>
using namespace std;

int totalNumbers(vector<int>& digits) {
 int n = digits.size();

 map<int,int>mp;
 for(int i = 0;i<n;i++){
   mp[digits[i]]++;
 }
 vector<int>mp1 = {0,2,4,6,8};
 for(int i = 1;i<10;i++){
   if(mp[i]==0)continue;
   mp[i]--;
   // now check for 10th digit
   for(int j = 0;j<10;j++){
      if(mp[j]==0)continue;
      mp[j]--;

      for(int k  = 0;k<mp1.size();k++){
        if(mp[k]>0){
          count++;
        }
      }
      mp[j]++;

   }
   mp[i++];
 }
 return count;

}
 
int main(){
  int n;
  cin>>n;
  vector<int> digits(n);
  for(int i =0;i<n;i++){
    cin>>digits[i];
  }
  int ans = totalNumbers(digits);
  cout<<ans<<endl;
 return 0;
}
