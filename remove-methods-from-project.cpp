#include<iostream>
using namespace std;
void flag(auto &mp,int node,auto & vis, auto &ans){
  ans.push_back(node);
  vis[node] = 1;
  for(auto nei:mp[node]){
    if(!vis[nei]){
      dfs(mp,nei,vis,ans);

    }
  }
}
vector<int> remainingmethods(int n, int k, vector<vector<int>>& nums) {
        map<int,list<int>>mp;
        for(int i = 0;i<nums.size();i++){
          int a = nums[i][0];
          int b = nums[i][1];
        
          mp[a].push_back(b);
        }
        vector<int> vis(n,0);
        
        vector<int> ans;
          if(!vis[k]){
                flag(mp,k,vis,ans);
          }

        for(int i =0;i<nums.size();i++){
            if(!vis[nums[i][0]] && vis[nums[i][1]]){
              ans.puhs_back(nums[i][0]);
            }
        }
        return ans;
}
int main(){
  int n,k;
  cin>>n>>k;
  vector<vector<int>> nums(n);
  for(int i = 0;i<n;i++){
    int  a,b;
    cin>>a>>b;
    nums[i] = {a,b};
  }
  vector<int> ans = remainingMethods(n,k,nums);
  return 0;
}
