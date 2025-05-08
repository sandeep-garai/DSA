class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        int i=0;
        string ans="";
        while(i<s.size()){
            if(isdigit(s[i])){
                if(st.size()>0)
                    st.pop();
            }
            else{
                st.push(s[i]);
            }
            ++i;
        }
        while(!st.empty()){
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
    }
};