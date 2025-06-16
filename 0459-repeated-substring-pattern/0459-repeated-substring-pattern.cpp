class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string db_str= s+s;
        string str = db_str.substr(1,db_str.size()-2);
        return str.find(s)!=string::npos;
    }
};