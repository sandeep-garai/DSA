class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result(2);
        int i=0,j=numbers.size()-1;
        while(i<=j){
            if(numbers.at(i)+numbers.at(j)==target)
                return vector<int>{i+1,j+1};
            else if(numbers.at(i)+numbers.at(j)>target)
                j--;
            else if(numbers.at(i)+numbers.at(j)<target)
                i++;
        }
        return result;
    }
};