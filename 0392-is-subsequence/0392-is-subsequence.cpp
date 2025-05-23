class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(size(s)==0)  return true;
        for(int i=0,j=0;i<size(s) && j<size(t);j++){
            if(s[i]==t[j]){
                ++i;
            }
            if(i==size(s))  return true;
        }
        return false;
    }
};