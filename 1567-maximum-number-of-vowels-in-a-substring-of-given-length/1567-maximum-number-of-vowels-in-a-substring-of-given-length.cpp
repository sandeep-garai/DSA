class Solution {
public:
    int maxVowels(string s, int k) {
        int cnt = 0, maxm = 0;
        string vowels = "aeiou";
        for (int i = 0; i < s.size(); i++) {
            if (i >= k && vowels.find(tolower(s[i-k])) != string::npos) cnt--;
            if (vowels.find(tolower(s[i])) != string::npos) cnt++;
            if (i >= k-1) maxm = max(maxm, cnt);
        }
        return maxm;
    }
};
