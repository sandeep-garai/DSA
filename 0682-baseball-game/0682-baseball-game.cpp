class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(auto &op :operations){
            if(op=="+"){
                int top = st.top();
                st.pop();
                int newtop = st.top();
                st.push(top);
                st.push(newtop+top);
            }
            else if(op == "D")
                st.push(st.top() * 2);
            else if(op == "C")
                st.pop();
            else{
                st.push(stoi(op)); //for the digits
            }
        }
        int sum=0;
        while(!st.empty()){
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};