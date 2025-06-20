class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mp;
        for(string st : strs){
            string t = st;
            sort(t.begin(),t.end());
            mp[t].push_back(st);
        }
        for(auto& st: mp){
            ans.push_back(st.second);
        }
        return ans;
    }
};