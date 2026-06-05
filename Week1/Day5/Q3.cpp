class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = strs[0];
        for(int i=0;i<s.size();i++){
            char curr = s[i];
            for(int j=1;j<strs.size();j++){
                if(i>=strs[j].length() || strs[j][i]!=curr){
                    return s.substr(0,i);
                }
            }
        }
        return s;
    }
};
