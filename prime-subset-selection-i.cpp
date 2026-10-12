#include<iostream>
using namespace std;
void Fill_Primes(vector<int> &nums,int n){
  nums[0] = false;
  nums[1] = false;
  for(int i = 2;i*i<=n;i++){
    if(nums[i]){
      for(int j = i*i;j<=n;j++){
        nums[j] = false;
      }
    }
  }
}
vector<int> maxPrimes(int n, int s) {
    vector<bool > primes(n+1,true);
    Fill_Primes(primes,n);
    vector<int>ans;
    long long sum = 0;
    for(int i = 0;i<=n;i++){
      if(primes[i] ){
        sum+=i;
        if(sum<=s){
          ans.push_back(i);
        }
      }
    }
    return ans;
}
int main(){
  int n, s;
  cin>>n>>s;
  vector<int>ans  = maxPrimes(n,s);
  for(int nei : ans)cout<<nei<<" ";
  return 0;
}
