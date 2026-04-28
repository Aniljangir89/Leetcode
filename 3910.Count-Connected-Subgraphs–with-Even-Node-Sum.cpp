class Solution {
public:
    void find_subset(auto &subset,auto & arr,int i,auto & nums){
        int n = nums.size();
        if(i>=n){
            if(!arr.empty()){
                subset.push_back(arr);
            }
            return ;
        }
        //lele
        arr.push_back(i);
        find_subset(subset,arr,i+1,nums);
        arr.pop_back();
        // na le 
        find_subset(subset,arr,i+1,nums);
    }
    int node_sum(auto & nums,auto &sub){
        int sm =0 ;
        for(auto node:sub){
            sm+= nums[node];
        }
        return sm;
    }
    void dfs(vector<int> &vis,int node,map<int,list<int>> &mp,unordered_set<int>& st){

        int n = vis.size();
        vis[node]=1;
        for(auto nei:mp[node]){
            if(!vis[nei] && st.count(nei)){
                dfs(vis,nei,mp,st);
            }
        }
        return ;
    }
    bool is_connected(auto & sub, auto & nums,auto & mp){

        int n = nums.size();
        unordered_set<int> st(sub.begin(),sub.end());
        vector<int>vis(n,0);
        dfs(vis,sub[0],mp, st);
        for(auto node: sub ){
            if(!vis[node])return false;
        }
        return true;
    }
    int evenSumSubgraphs(vector<int>& nums, vector<vector<int>>& edges) {
        map<int,list<int>>mp;
        for(auto ed:edges){
            int u  = ed[0];
            int v =  ed[1];
            mp[u].push_back(v);
            mp[v].push_back(u);
        }
        // find all possible subsets
        vector<vector<int>> subset;
        vector<int> arr;
        find_subset(subset,arr,0,nums);
        int ans =0 ;
        for(auto &sub:subset){
            int n = sub.size();
            if(node_sum(nums,sub)%2!=0) continue;
            // connected hai ya nhi 
            if(! is_connected(sub,nums,mp))continue;
             for(auto ele:sub){
                cout<<ele<<" ";
             }
             cout<<endl;
            ans++;
        }
        return ans;
    }

};