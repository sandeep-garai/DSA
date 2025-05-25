class Solution {
public:
    int compress(vector<char>& chars) {
        int cnt = 1;
        int write =0;
        for(int read = 1; read<=chars.size();read++){
            if(read == chars.size() || chars[read]!=chars[read-1]){
                chars[write++] = chars[read-1];
                if(cnt>1){
                    string str=to_string(cnt);
                    for(char s:str){
                        chars[write++]=s;
                    }
                }
                cnt=1;
            }
            else{
                ++cnt;
            }
        }
        return write;
    }
};