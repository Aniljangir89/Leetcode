
// 3964. Minimum Lights to Illuminate a Road
// Medium
// premium lock icon
// Companies
// Hint
// You are given an integer array lights of length n, representing positions 0 through n - 1 on a road.

// For each position i:

// If lights[i] = v, where v > 0, there is a working bulb at position i that illuminates every position from max(0, i - v) to min(n - 1, i + v), inclusive.
// If lights[i] = 0, there is no working bulb at position i.
// A position is visible if it is illuminated by at least one working bulb.

// You may install additional bulbs at any positions. Each additional bulb installed at position j illuminates positions from max(0, j - 1) to min(n - 1, j + 1), inclusive.

// Return the minimum number of additional bulbs required to make every position on the road visible.

 

// Example 1:

// Input: lights = [0,0,0,0]

// Output: 2

// Explanation:

// One optimal placement is:

// Install an additional bulb at position 1, illuminating positions [0, 1, 2].
// Install an additional bulb at position 3, illuminating positions [2, 3].
// Therefore, the minimum number of additional bulbs required is 2.

// Example 2:

// Input: lights = [0,0,0,2,0]

// Output: 1

// Explanation:

// Since lights[3] = 2, the working bulb at position 3 illuminates positions [1, 2, 3, 4].
// Installing an additional bulb at position 1 illuminates positions [0, 1, 2], making every position visible.
// Therefore, the minimum number of additional bulbs required is 1.
 

// Constraints:

// 1 <= n == lights.length <= 105
// 0 <= lights[i] <= n

class Solution {
public:
    int minLights(vector<int>& lights) {
        int n = lights.size();
        vector<int>diff(n, 0);

        for(int i =0 ;i<n;i++){
            if(lights[i]){
                int left = max(0, i - lights[i]);
                int right = min(n - 1, i  + lights[i]);
                diff[left]++;
                if(right + 1 < n) diff[right + 1]--;
            }
        }
        for(int i = 1; i < n; i++){
            diff[i] += diff[i - 1];

        }
        int ans =0;
        for(int i=0;i<n;i++){
            if(!diff[i] && ! lights[i]){
                int left = max(0, i -1);
                int right = min(n - 1, i+1);
                ans ++;
                if(i+1 < n) diff[i+1]=1;
                if(i+2<n)diff[i+2]=1;
            }
        }
        return ans;

    }
};