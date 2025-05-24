class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int i=0;
        vector<int> v;
        for(string word:words){
            if(word.find(x)!=string::npos)
                v.push_back(i);
            ++i;
        }
        return v;
    }
};