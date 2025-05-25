class Solution {
public:
    string reverseVowels(string s) {
        string word = s;
        string vowel = "aeiouAEIOU";
        int start = 0;
        int end = size(s)-1;
        while(start < end){
            while(start < end && vowel.find(word[start])==string::npos){
                start++;
            }
            while(start < end && vowel.find(word[end])==string::npos){
                end--;
            }
            swap(word[start],word[end]);
            start++;
            end--;
        }
        return word;
    }
};