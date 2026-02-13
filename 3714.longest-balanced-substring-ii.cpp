/*
 * @lc app=leetcode id=3714 lang=cpp
 *
 * [3714] Longest Balanced Substring II
 */

// @lc code=start
/*
 * @lc app=leetcode id=3714 lang=cpp
 *
 * [3714] Longest Balanced Substring II
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int f(string &s, char ch){
        int ans = 0, count = 0;
        for(char c : s){
            if(c == ch){
                count++;
            } else {
                ans = max(ans,count);
                count = 0;
            }
        }
        return max(ans,count);
    }
    int f2(string &s, char ch1, char ch2){
        int count1 = 0, count2 = 0;
        int ans = 0;
        int n =s.size();
        map<int,int>mp;
        mp[0]=-1;
        for(int i=0;i<n;i++){
            if(s[i]==ch1)count1++;
            else if(s[i]==ch2)count2++;
            else{
                count1 =0,count2=0;
                mp.clear();
            }
            int diff = count1-count2;
            if(mp.find(diff)!=mp.end()){
                ans = max(ans,i-mp[diff]);
            }else{
                mp[diff]=i;
            }
        }
        return ans;
    }
    int f3(string &s){
        int a = 0, b = 0, c = 0;
        int ans = 0;

        map<pair<int,int>, int> mp;
        mp[{0,0}] = -1;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'a') a++;
            else if(s[i] == 'b') b++;
            else if(s[i] == 'c') c++;
            int diff1 = a - b;
            int diff2 = a - c;

            if(mp.count({diff1, diff2})){
                ans = max(ans, i - mp[{diff1, diff2}]);
            } else {
                mp[{diff1, diff2}] = i;
            }
        }
        return ans;
    }

    int longestBalanced(string s) {
        int ans = 0;
        ans = max({ans, f(s,'a'), f(s,'b'), f(s,'c')});
        ans = max({ans,
                   f2(s,'a','b'),
                   f2(s,'a','c'),
                   f2(s,'b','c')});
        ans = max(ans, f3(s));

        return ans;
    }
};

// @lc code=end

