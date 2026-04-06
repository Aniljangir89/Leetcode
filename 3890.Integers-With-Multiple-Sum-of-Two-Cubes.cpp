

class Solution {
public:
    int under_root(int n){
         int ans = 1;
         int i = 1;
         while(pow(i,3)<=n){
            i++;
         }
         return i;
    }
    vector<int> findGoodIntegers(int n) {
        x = under_root(n);
        map<int,int>mp;
        for(int i = 0;i<=x;i++){
            for(int j=i+1;j<=x;j++){
                int num = pow(i,3)+pow(j,3);
                mp[num]++;
            }
        }
        vector<int>ans;
        for(auto nei:mp){
            if(nei.first<=n && nei.second>=2)ans.push_back(nei.first);
        }
        return ans;
    }
};