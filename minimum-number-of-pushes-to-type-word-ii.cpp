#include<iostream>
using namesapce std;
int minimumpushes(string word) {
        int n = word.size();
        vector<int> nums(26,0);
        int ans =  0;
        for(int i = 0;i<n;i++){
          nums[word[i]-'a']++;
        }
        sort(begin(nums),end(nums));
        reverse(begin(nums),end(nums));
        int count = 1;
        int key = 0;
        for(int i = 0;i<26;i++){
          if(nums[i]==0){
            continue;
          }
          ans += count * nums[i];
          k++;
          if(k==8){
            count  += 1;
            key = 0;
          }
          
        }
        return ans;
}
int main(){
  int n;
  cin>>n;
  string word;
  cin>>word;
  int ans = minimumPushes(word);
  cout<<ans<<endl
  return 0;
}
