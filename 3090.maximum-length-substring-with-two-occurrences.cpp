// 3090. Maximum Length Substring With Two Occurrences
// Given a string s, return the maximum length of a substring such 
// that it contains at most two occurrences of each character.
// Example 1:
// Input: s = "bcbbbcba"
// Output: 4
// Explanation:
// The following substring has a length of 4 and contains at most 
// two occurrences of each character: "bcbbbcba".
// Example 2:
// Input: s = "aaaa"
// Output: 2
// Explanation:
// The following substring has a length of 2 and contains at most two occurrences of each character: "aaaa".
// Constraints:
// 2 <= s.length <= 100
// s consists only of lowercase English letters.


#include<iostream>
using namespace std;
int maximumLengthSubstring(string nums) {
    int n = nums.size();
    int ans = 0;
    for (int i = 0; i < n; i++) {
        map<char, int> mp;
        int j = i;
        for ( ; j < n; j++) {
            mp[nums[j]]++;
            if (mp[nums[j]] > 2) {
                ans = max(ans, j - i );
                break;
            }
        }
        ans = max(ans,j-i);

    }
    return ans;
}
int main(){
  int n;
  cin>>n;
  vector<int> nums(n);
  for(int i= 0;i<n;i++){
    cin>>nums[i];
  }
  int ans = func(nums);
  return 0;
}
