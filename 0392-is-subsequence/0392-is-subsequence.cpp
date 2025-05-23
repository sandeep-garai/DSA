class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(size(s)==0)  return true;
        int l = 0;
        char c = s[0];
        for(int i=0;i<t.length();i++){
            if(c==t[i]){
                //c=s[l];
                l=l+1;
                c=s[l];
                if(l>=size(s))  return true;
            }
        }
        return false;
    }
};