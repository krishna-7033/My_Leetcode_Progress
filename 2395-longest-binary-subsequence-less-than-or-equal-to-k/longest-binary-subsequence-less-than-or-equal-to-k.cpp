class Solution {
public:
    int longestSubsequence(string s, int k) {
        int zeros = 0;
        int ones = 0;
        long long value = 0;
        long long pow2 = 1;

        for (char c : s) {
            if (c == '0') {
                zeros++;
            }
        }

        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == '1') {
                if (value + pow2 <= k) {
                    value += pow2;
                    ones++;
                }
            }
            if (pow2 <= k) {
                pow2 <<= 1;
            }
        }

        return zeros + ones;
    }
};
