class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxc = 0;
        int i=0;
        vector<bool> result(size(candies));
        for(int c: candies){
            if(c > maxc)
                maxc=c;
        }
        for(int c:candies){
            if(c + extraCandies >= maxc){
                result[i++] = true;
            }
            else{
                result[i++] = false;
            }
        }
        return result;
    }
};