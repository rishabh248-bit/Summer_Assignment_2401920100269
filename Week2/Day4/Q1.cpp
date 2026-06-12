class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        string word = "";
        for(char c:s){
            if(c==' '){
                reverse(word.begin(), word.end());
                ans += word + " ";
                word = "";
            }else word += c;
        }
        reverse(word.begin(), word.end());
        ans += word;
        return ans;
    }
};
