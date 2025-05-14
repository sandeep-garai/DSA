class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt=0;
        for(int i=s.length()-1;i>=0;i--){
            if(isalpha(s[i])){
                while(i>=0 && isalpha(s[i])){
                    cnt++;
                    --i;
                }
                return cnt;
            }
        }
        return cnt;
    }
};