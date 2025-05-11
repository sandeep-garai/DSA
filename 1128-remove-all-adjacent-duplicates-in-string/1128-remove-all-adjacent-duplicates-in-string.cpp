class Solution {
public:
    string removeDuplicates(string s) {
        //using the string push_back and pop_back
        string ans;
        for(char c: s){
            if(ans.size() && c==ans.back())
                ans.pop_back();
            else
                ans.push_back(c);
        }
        return ans;
    }
};