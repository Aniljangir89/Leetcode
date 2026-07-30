#include<iostream>
using namespace std;

string func(string &s){
  int n = s.size();
  string t  =  "";
  int i = 0;
  for( i = 0;i<n/2;i++){
      t+=s[i];
  }
  sort(begin(t),end(t));
  string ans =  "";
  ans += t;
  if(n%2!=0)ans+=s[i];
  reverse(begin(t),end(t));
  ans+=t;
  return ans;
}

int main(){
  int n;
  cin>>n;
  string str ;
  cin>> str;
  string ans = func(str);
  cout<<ans<<endl;
  return 0;
}
