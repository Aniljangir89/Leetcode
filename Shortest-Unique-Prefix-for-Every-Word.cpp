#include <iostream>
using namespace std;


class Solution {
  public:

    bool func(int i, vector<int>&nums){
      int n = nums.size();
      bool f = false;
      for(int j = 0; j<n;j++){
        if(j!=i){
          if(nums[i]== nums[j]){
            f = true;
          }
        }
      }
      return f;
    }
    vector<string> findPrefixes(vector<string>& arr) {
        // code here
        int n = arr.size();
        vector<string>ans(n);
        for(int i = 0;i<n;i++){
          string st = arr[i];
          string t = "";
          int i = 0;
          while(func(i,arr)){
            t+=arr[i];
            i++;
          }
          
        cout<<t<<" "<<endl;
        }
    }
};
int main(){
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i = 0;i<n;i++){
    int m;
    cin>>m;
    string str;
    cin>>str;
    arr[i] = str;
  }

  return 0;
}
