class Solution {
public:
    bool isPalindrome(string s) {
        int k=0;
        string ans;
        for(char c: s){
            if(std::isalnum(c))
                ans.push_back(tolower(c));
        }
        string rev=ans;
        std::reverse(rev.begin(),rev.end());
        if(ans==rev)
            return true;
        return false;
    }
};