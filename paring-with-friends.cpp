// Friends Pairing Problem
// Difficulty: MediumAccuracy: 25.04%Submissions: 137K+Points: 4
// Given n friends, each one can remain single or can be paired up with some other friend. Each friend can be paired only once. Find out the total number of ways in which friends can remain single or can be paired up.
//
// Examples :
//
// Input: n = 3
// Output: 4
// Explanation:
// {1}, {2}, {3} : All single
// {1}, {2,3} : 2 and 3 paired but 1 is single.
// {1,2}, {3} : 1 and 2 are paired but 3 is single.
// {1,3}, {2} : 1 and 3 are paired but 2 is single.
// Note that {1,2} and {2,1} are considered same.
// Input: n = 2
// Output: 2
// Explanation:
// {1} , {2} : All single.
// {1,2} : 1 and 2 are paired.
// Input: n = 1
// Output: 1
//
// Constraints:
//
// 1 ≤ n ≤ 18
//
//
#include<iostream>
int func(int n,vector<int> &vis){
  int  i = 0;
  while(i<n && vis[i])i++;
  if(i>=n){
     return 1;
  }
  vis[i] = 1;
  int ans = 0;
  ans = func(n,vis);
  for(int j = i+1;j<n;j++){
    if(!vis[j]){
      vis[j]=1;
      ans+=func(n,vis);
      vis[j] = 0;
    }
  }
  vis[i] = 0;
  return ans;
}
int countans(int n){
  vector<int>  vis(n,0);
  return func(n,vis);
}
using namesapce std;
int main(){

  int n;
  cin>>n;
  int ans = countans(n);
  cout<<ans<<endl;
  return 0;
}
