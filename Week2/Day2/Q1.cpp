class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int index[128] = {0};
        int maxLen = 0, start = 0;

        for (int i = 0; i < s.length(); ++i) {
            char c = s[i];
            if (index[(int)c] > start) {
                start = index[(int)c];
            }
            index[(int)c] = i + 1;
            int currLen = i - start + 1;
            if (currLen > maxLen) maxLen = currLen;
        }

        return maxLen;
    }
};
