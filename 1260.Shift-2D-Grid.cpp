#include<iostream>
using namespace std;

class Solution {
public:
    void func(vector<vector<int>> & nums,int k){
        int n = nums.size();
        int m = nums[0].size();
        vector<int>arr(n);
        for(int i= 0;i<n;i++){
          arr[i] = nums[i][m-1];
        }
        for(int i = 0;i<n;i++){
          for(int j = m - 1; j>=1;j--){
             nums[i][j] = nums[i][j-1];
          }
        }
        nums[0][0] = arr[n-1];
        for(int i = 1;i<n;i++){
          nums[i][0] = arr[i-1];
        }
    }
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();
        k%=(m*n);
        if(k==0)return grid;
        func(grid,k);
        shiftGrid(grid,k-1);
        return grid;
    }
};

int main(){

  int n,m;
  cin>>n>>m;
  int k;
  cin>>k;
  vector<vector<int>> grid(,vector<int>(m));
  for(int i =0 ;i<n; i++){
    for(int j = 0;j<m; j++){
      cin>>grid[i][j];
    }
  }
  shiftGrid(grid,k);
  return 0;
}
