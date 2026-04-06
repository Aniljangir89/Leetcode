class Solution {
public:
    char mirror_char(char ch){
        return ('z'-ch)+'a';
    }
    char mirror_int(char ch){
        return ('9'-ch)+'0';
    }
    int mirrorFrequency(string s) {
        string t = "";
        for(auto ch: s){
            if(ch>='a' && ch<='z'){
                t +=mirror_char(ch);
            }else{
                t+=mirror_int(ch);
            }
        }
        cout<<t<<endl;
        map<string,int>mp;
        for(int i=0;i<t.size();i++){
            string pair1 = t[i]+s[i];
            string pair2 = s[i]+t[i];
            if((mp.find(pair1)!=mp.end()) || (mp.find(pair2 )!=mp.end())){
                mp[pair1]+=1;
            }
        }
        
        return 0;
    }
};


// Example 1:

// Input: s = "ab1z9"

// Output: 3

// Explanation:

// For every mirror pair:

// c	m	freq(c)	freq(m)	|freq(c) - freq(m)|
// a	z	1	1	0
// b	y	1	0	1
// 1	8	1	0	1
// 9	0	1	0	1
// Thus, the answer is 0 + 1 + 1 + 1 = 3.

az by 18 90