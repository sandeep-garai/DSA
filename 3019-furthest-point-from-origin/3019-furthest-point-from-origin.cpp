class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int left=0,right=0;
        for(char m : moves){
            if(m=='L'){
                left++;
                right--;
            }
            else if(m=='R'){
                left--;
                right++;
            }
            else{
                left++;
                right++;
            }
        }
        return max(left,right);
    }
};