class Solution {
public:
    string decodeString(string s) {
        stack<pair<string, int>> st;
        string str = "";
        int num=0;
        for(char c:s){
            if(isdigit(c)) num = num*10 + (c-'0');
            else if(c == '['){
                st.push({str,num});
                str = "";
                num = 0;
            } 
            else if(c == ']'){
                pair<string, int> top = st.top();
                st.pop();
                              
                string repeat = "";
                for(int i=0; i<top.second; i++) repeat += str;
                str = top.first + repeat;
            } 
            else str += c;
        }
        return str;
    }
};
