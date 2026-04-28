/*
 * @lc app=leetcode id=2833 lang=cpp
 *
 * [2833] Furthest Point From Origin
 */

// @lc code=start
class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int ans =0;
        int count = 0,count1=0,count2=0;
        for(char ch :moves){
            if(ch =='L'){
                count1++;

            }else if(ch == 'R'){
                count2++;
            }else{
                count++;
            }
        }
        return count+ max(count1,count2)- min(count1,count2);
    }
};
// @lc code=end


// Input: nums = [1,2,4,2,3,2]

// Output: [1,2,4,3,2]
