class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        string str="";
        //st.push(s[0]);
        for(int i=0;i<s.length();i++){
            if(st.size()>0 && s[i]==st.top())
                st.pop();
            else
                st.push(s[i]);  

            //cout<<st.top()<<" ";
        }
        while(!st.empty()){
            str=st.top()+str;
            st.pop();
        }
        return str;
    }
};