class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.length()>magazine.length())
            return false;
        unordered_map<char,int> mp;
        for(char s:magazine){
            mp[s]++;
        }
        for(char s:ransomNote){
            if(mp.find(s)!=mp.end() && mp[s] > 0){
                mp[s]--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};