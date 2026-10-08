#include<iostream>
#include<bits/stdc++>
using namespace std;
string removeOuterParentheses(string s) {
      int  n= s.size();
      vector<pair<int,int>>nums;
      stack<char>st;
      int i = 0,j =0;
      for(char nei : s){
        if(nei == '('){
          st.push(nei);
        }else{
          if(!st.empty){
            st.pop();
            if(st.size() == 0){
              nums.push_back({j,i});
              j = i+1;
            }
          }
        }
        i++;
      }

      string ans = "";
      for(auto &p:nums){
          for(int k = p.first+1;k < p.second;k++){
            ans+=s[k];
          }
      }
      return ans;
}
int main(){
  int  n ;
  cin>> n;
  string st;
  cin>>st;
  string ans  = removeOuterParentheses(s);
  cout<<ans<<endl;
  return 0;
}
