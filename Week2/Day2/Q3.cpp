class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if (p.size() > s.size()) return {};
        vector<int> pC(26, 0), sC(26, 0);
        for (char c:p) pC[c-'a']++;
        for (int i=0; i<p.size(); i++) sC[s[i]-'a']++;
        vector<int> ans;
        if (pC == sC) ans.push_back(0);

        int l = 0;
        for(int r=p.size(); r<s.size(); r++) {
            sC[s[r]-'a']++;
            sC[s[l]-'a']--;
            l++;
            if(pC == sC) ans.push_back(l);
        }
        return ans;
    }
};
