class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> seen;
        for(int num: arr){
            if(seen.count(num*2) || ((num%2==0) && seen.count(num/2)))
                return true;
            seen.insert(num);
        }
        return false;
        // for(int i=0;i<arr.size();i++){
        //     for(int j=0;j<arr.size();j++){
        //         if(arr[i]==2*arr[j] && i!=j){
        //             //cout<<i+1<<" "<<j+1;
        //             return true;
        //         }
        //     }
        // }
        // return false;
    }
};