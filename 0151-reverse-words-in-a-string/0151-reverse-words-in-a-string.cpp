class Solution {
public:
    string reverseWords(string s) {
        istringstream iss(s);
        string word, ans;
        while (iss >> word) {
            if (!ans.empty()) {
                ans = word + " " + ans;
            } else {
                ans = word;
            }
        }
        return ans;
    }
};
