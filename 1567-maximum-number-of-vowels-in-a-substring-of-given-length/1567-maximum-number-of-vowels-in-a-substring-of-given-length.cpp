class Solution {
public:
    bool isVowel(char c){
        c = tolower(c);
        return c=='a'||c=='i'||c=='o'||c=='e'||c=='u';
    }
    int maxVowels(string s, int k) {
        int maxm =0,cnt=0;
        for(int i=0;i<k;i++){
            if(isVowel(s[i]))   cnt++;
        }
        maxm = cnt;
        for(int i=k;i<=s.length();i++){
            if(isVowel(s[i])) cnt++;
            if(isVowel(s[i-k])) cnt--;
            maxm = max (cnt, maxm);
        }
        return maxm;
    }
};