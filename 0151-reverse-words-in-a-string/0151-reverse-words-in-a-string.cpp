class Solution {
public:
    string reverseWords(string s) {
        string ans,word="";
        s+=" ";
        for(int i=0;i<size(s);i++){
            if(s[i]==' ' && !word.empty()){
                if(!ans.empty())
                    ans= word + ' ' + ans;
                else
                    ans=word;
                word="";
            }
            if(s[i]!=' '){
                word=word+s[i];
            }
        }
        return ans;
    }
};