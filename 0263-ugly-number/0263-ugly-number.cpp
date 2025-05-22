class Solution {
public:
    bool isUgly(int n) {
        if (n <= 0) return false;
        
        // Continuously divide n by 2, 3, and 5 as long as it's divisible
        for (int p : {2, 3, 5}) {
            while (n % p == 0) {
                n /= p;
            }
        }
        
        // If n becomes 1, it means all prime factors are 2, 3, or 5
        return n == 1;
    }
};
