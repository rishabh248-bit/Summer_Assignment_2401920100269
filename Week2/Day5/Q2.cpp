class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int idx = 0;
        int i = 0;   
        while(i<n) {
            char curr=chars[i];
            int cnt=0;
            while(i<n && chars[i]==curr){
                cnt++;
                i++;
            }
            chars[idx++] = curr;
            if(cnt>1){
                string count = to_string(cnt);
                for(char ch:count) chars[idx++] = ch;
            }
        }
        return idx;
    }
};
