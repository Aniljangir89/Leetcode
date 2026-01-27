/*
 * @lc app=leetcode id=547 lang=cpp
 *
 * [547] Number of Provinces
 */

// @lc code=start
class Solution {
public:
    void dfs(vector<int> & vis,map<int,list<int>>&mp,int node){
        vis[node]=1;
        for(auto it:mp[node]){
            if(!vis[it]){
                dfs(vis,mp,it);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& nums) {
        int n = nums.size();
        vector<int> vis(n,0);
        map<int,list<int>>mp;
        int ans =0 ;
        for(int i= 0;i<n;i++){
                for(int j =0 ;j<n;j++){
                    if(i!=j && nums[i][j]==1){
                        mp[i].push_back(j);
                    }
                }
        }
        for(int i =0;i<n;i++){
            if(!vis[i]){
                ans++;
                dfs(vis,mp,i);
            }
        }
        return ans;
    }
};
// @lc code=end

