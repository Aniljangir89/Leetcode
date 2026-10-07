#include<iostream>
using namespace std;


int minAddToMakeValid(string s) {
        int n = s.size();
        stack<char> st;
        int offset = 0;
        for(char nei : s){
            if(nei == '('){
                st.push(nei);
            }else{
                if(!st.empty()){
                    st.pop();
                }else{
                    offset++;
                }
            }
        }
        return st.size() + offset;
}
int main(){

  int n;
  string s;
  cin>>n;
  cin>>s;
  int ans = minAddToMakeValid(s);
  cout<<ans<<endl;
  return 0;
}
