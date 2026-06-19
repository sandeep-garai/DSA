class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result(2);
        int i=0,j=numbers.size()-1;
        while(i<j){
            int sum = numbers.at(i)+numbers.at(j);
            if(sum==target)
                return vector<int>{i+1,j+1};
            else if(sum>target)
                j--;
            else
                i++;
        }
        return result;
    }
};