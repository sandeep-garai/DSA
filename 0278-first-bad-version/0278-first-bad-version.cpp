// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    //v2 using binary search (for sorted array(versions))
    //as the all the version after bad version is bad; finding first bad version
    int firstBadVersion(int n) {
        int l=1,r=n;
        while(l<r){
            int mid=l+(r-l)/2;
            if(isBadVersion(mid))   r=mid;
            else    l=mid+1;
        }
        return l;
    }
};