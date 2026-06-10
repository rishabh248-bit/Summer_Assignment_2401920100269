class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.length();
        for(int l=1;l<=n/2;l++){
            if(n%l!=0) continue;

            bool same=true;
            string repeat = s.substr(0,l);
            for(int i=l;i<n;i+=l){
                if(s.substr(i,l)!=repeat){
                    same=false;
                    break;
                }
            }
            if(same) return true;
        }
        return false;
    }
};
