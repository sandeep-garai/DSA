class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        for(int i=0;i<s.length();i++){
            if(mp.find(s[i])!=mp.end())
                mp[s[i]]++;
            else
                mp[s[i]]=1;
        }
        int len=0;
        bool hasOdd = false;
        for(pair<char,int> pr : mp){
            if(pr.second%2==0){
                len+=pr.second;
            }
            else{
                len+=pr.second-1;
                hasOdd = true;
            }
        }
        return hasOdd? len+1 : len;
    }
};