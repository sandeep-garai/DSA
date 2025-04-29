class Solution {
public:
    //using leethub for uploading
    int countSegments(string s) {
        int i=0,cnt=1;  //count =1 for the very first element
        if(s.length()<1)    return 0;
        if(s[0]==' ')   //if first element doesn't start at the beginning cnt=0
            cnt=0;
        while(i<s.length()-1){
            if(s[i]==' '&&s[i+1]!=' ')  //if space and very next element is alphabet
                cnt++;
            ++i;
        }
        return cnt;
    }
};