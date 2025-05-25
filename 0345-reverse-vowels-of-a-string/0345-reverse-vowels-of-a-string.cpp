class Solution {
public:
    string reverseVowels(string s) {
        for(int i=0, j=size(s)-1;i<=j;){
            char ch = tolower(s[i]);
            char ch2 = tolower(s[j]);
            if(!((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')))
                ++i;
            if(!((ch2=='a')||(ch2=='e')||(ch2=='i')||(ch2=='o')||(ch2=='u')))
                --j;
            else if(((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')) && ((ch2=='a')||(ch2=='e')||(ch2=='i')||(ch2=='o')||(ch2=='u'))){
                swap(s[i],s[j]);
                ++i;
                --j;
            }  
        }
        return s;
    }
};