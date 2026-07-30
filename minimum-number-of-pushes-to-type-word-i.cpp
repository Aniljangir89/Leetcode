#include<iostream>
using namespace std;
 int minimumPushes(string word) {
       int  n = word.size();
       // we can go like first we type the chars upto 7 in one press
       // if we need go after that then we neee to press 2 time and so one
       int ans = 0;
       int prev = 0;
       int key = 1;
       //xycdefghij
       for(auto ch : word){
          ans+=key;
          prev++;
          if(prev==8){
            prev=0;
            key++;
          }
       }
       return ans;
}
int main(){
  int n;
  cin>>n;
  string word;
  cin>>word;
  int ans =  minimumPushes(word);
  cout<<ans<<endl;
  return 0;
}
