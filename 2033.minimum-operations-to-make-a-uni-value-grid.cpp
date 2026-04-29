/*
 * @lc app=leetcode id=2033 lang=cpp
 *
 * [2033] Minimum Operations to Make a Uni-Value Grid
 */

// @lc code=start
class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> nums;
        int n =grid.size();
        int m = grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                nums.push_back(grid[i][j]);
            }
        }
        sort(begin(nums),end(nums));
        int mid = nums[nums.size()/2];
        cout<<mid<<endl;
        int ans =0;
        for(int i=0;i<n*m;i++){
            if(abs(mid - nums[i])%x!=0){
                return -1;
            }
            ans +=abs(mid-nums[i])/x;
        }
        return ans;

    }
};
// @lc code=end
