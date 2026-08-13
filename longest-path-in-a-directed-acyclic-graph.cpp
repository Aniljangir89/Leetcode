#include<iostream>
using namespace std;
void dfs(int node,vector<int> &vis,stack<int> &st,map<int,list<pair<int,int>>>&mp){
  vis[node]= 1;
  for(auto nei:mp){
    if(!vis[nei[0]]){
      dfs(nei[0],vis,mp);
    }
  }
  st.push(node);

}
vector<int> maxDistance(int v, int src, vector<vector<int>> &nums) {
        // code here
        map<int,list<pair<int,int>>>mp;
        for(auto e:nums){
          int  u = e[0];
          int v = e[1];
          int w = e[2];
          mp[u].push_back({v,w});
          
        }
        vector<int>vis(v,0);
        stack<int> st;
        for(int i = 0;i<v;i++){
          if(!vis[i]){
            dfs(i,vis,st,mp);
          }
        }

        vector<int> dist(v,-1e9);
        dist[src] = 1;
        while(!st.empty()){
            int node = st.top();
            st.pop();
            if(dist[u]==-1e9)continue;
            while(auto nei : mp[node]){
              int v = nei[0];
              int w = nei[1];
              dist[v] = max(dist[v],dist[u]+w);
            }
        }
        return dist;
}
int main(){
  int v,src;
  cin>>v>>src;
  vector<vector<int>>nums;
  for(int i = 0;i<v;i++){
    int u,v,w;
    cin>>u>>v>>w;
    nums.push_back({u,v,w});
  }
  vector<int>ans = maxDistance(v,src,nums);

  return 0;
}
