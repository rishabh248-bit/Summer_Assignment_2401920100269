class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char,int> ana1;
        unordered_map<char,int> ana2;
        for(int i=0; i < s.length(); i++) {
            ana1[s[i]]++;
            ana2[t[i]]++;
        }
        return ana1 == ana2;
    }
};
