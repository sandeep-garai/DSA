class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()>t.size())   return false;
        unordered_map<char,int> st;
        for (char c: s){
            st[c]++;
        }
        for(char c:t){
            if(st.find(c)==st.end())    return false;
            if(st[c]<=0)    return false;
            st[c]--;
        }
        return true;
    }
};