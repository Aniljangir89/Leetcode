class Solution {
public:
    char mirror(char ch) {
        if (ch >= 'a' && ch <= 'z') {
            return ('z' - ch) + 'a';
        } else {
            return ('9' - ch) + '0';
        }
    }

    int mirrorFrequency(string s) {
        vector<int> freq(128, 0);

        // Step 1: count frequency
        for (char ch : s) {
            freq[ch]++;
        }

        int ans = 0;

        // Step 2: process only unique characters
        for (char ch : s) {
            if (freq[ch] == 0) continue;  // already processed

            char m = mirror(ch);

            ans += abs(freq[ch] - freq[m]);

            // mark both as visited
            freq[ch] = 0;
            freq[m] = 0;
        }

        return ans;
    }
};