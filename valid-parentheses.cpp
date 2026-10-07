#include<iostream>
using namespace std;

 bool isValid(string s) {
      stack<char> st;
      for(char &nei : s){
        if(nei=='(' || nei == '[' || nei =='{' ){
          st.push(nei);
        }else if(nei ==')'){
              if(!st.empty() && st.top()=='('){
                st.pop();
              }
        }else if(nei =='}'){
          if(!st.empty() && st.top()=='}'){
            st.pop();
          }
        }else if(nei == ']'){
          if(!st.empty() && st.top() ==']')st.pop();
        }else return false;
      }
      return st.empty();
 }
int main(){
  int n; 
  string str;
  cin>>str;
  cout<<isValid(str);
}
