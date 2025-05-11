class Solution {
public:
    int maxDepth(string s) {
        int max_depth=0,depth=0;
        for(char c: s){
            if(c=='(')
                depth++;
            else if(c==')')
                depth--;
            max_depth=max(max_depth,depth);
        }
        return max_depth;
    }
};