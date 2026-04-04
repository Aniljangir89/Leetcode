/*
 * @lc app=leetcode id=2075 lang=cpp
 *
 * [2075] Decode the Slanted Ciphertext
 */

// @lc code=start
class Solution {
public:
    string decodeCiphertext(string str, int rows) {
        int sz = str.size();
        int n = rows;
        int m = sz/n;
        int k = 0;
        if(sz ==0)return "";
        vector<vector<char>>nums(n,vector<char>(m,' '));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                nums[i][j] = str[k++];
            }
        }
        string ans = "";
        int j=0;
        while(j<m){
            int k = j;
            int i = 0;
            while(i<n && k<m){
                ans += nums[i][k];
                i+=1;
                k+=1;
            }
            j+=1;
        }
        j = ans.size()-1;
        while(j  && ans[j]==' ')j--;
        return ans.substr(0,j+1);

    }
};
// @lc code=end

