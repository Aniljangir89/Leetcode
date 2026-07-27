// You are given two 2D integer arrays series1 and series2.
//
// Each element in both series is of the form [timestamp, value], where:
//
// timestamp is an integer representing the time.
// value is an integer representing the value at that timestamp.
// Each array is sorted in strictly increasing order of timestamp.
//
// For any timestamp not present in a series, its value is taken from the next available timestamp in the same series if one exists. Otherwise, its value is considered 0.
//
// The aggregated series is formed by summing the corresponding values from both series at every timestamp that appears in either series.
//
// Return the aggregated series as a 2D integer array of [timestamp, summedValue] pairs, sorted in strictly increasing order of timestamp.
//
//
//
// Example 1:
//
// Input: series1 = [[1,3],[4,1]], series2 = [[2,2],[5,2]]
//
// Output: [[1,5],[2,3],[4,3],[5,2]]
//
#include<iostream>
using namespace std;

class Solution {
public:
    vector<vector<int>> aggregateTimeSeries(vector<vector<int>>& series1,
                                            vector<vector<int>>& series2) {
        int n = series1.size();
        int m = series2.size();
        vector<vector<int>> ans;
        // both the series are sorted
        int i = 0, j = 0;
        while (i < n && j < m) {
            int val1 = series1[i][1];
            int time1 = series1[i][0];
            int val2 = series2[j][1];
            int time2 = series2[j][0];
            int summedValue = val1 + val2;
            if (time1 == time2) {
                ans.push_back({time1, summedValue});
                i++, j++;
            } else if (time1 <= time2) {
                ans.push_back({time1, summedValue});
                i++;
            } else {
                ans.push_back({time2, summedValue});
                j++;
            }
        }
        // may me all the elements of the arrays are not valished either
        while (i < n) {
            ans.push_back({series1[i][0], series1[i][1]});
            i++;
        }
        while (j < m) {
            ans.push_back({series2[j][0], series2[j][1]});
            j++;
        }
        return ans;
    }
};
int main(){
  int n,m;
  cin>>n>>m;
  vector<vector<int>> series1,serries2;
  for(int i = 0;i<n;i++){
    cin>>series1[i];
  }
  for(int i = 0;i<m;i++){
    cin>>series2[i];
  }
  vector<vector<int>> ans = aggregateTimeSeries(series1,series2);
  return 0;
}
