class Solution {
public:
    int myAtoi(string s) {
        long long result = 0;
        int sign = 1;
        bool signEncountered = false;
        bool digitEncountered = false;

        for (char c : s) {
            if (c == ' ' && !digitEncountered && !signEncountered) {
                continue;
            }

            if ((c == '-' || c == '+') && !signEncountered && !digitEncountered) {
                signEncountered = true;
                if (c == '-') {
                    sign = -1;
                }
                continue;
            }

            if (c >= '0' && c <= '9') {
                digitEncountered = true;
                result = result * 10 + (c - '0');
                if (result * sign > INT_MAX) {
                    return INT_MAX;
                }
                if (result * sign < INT_MIN) {
                    return INT_MIN;
                }
            } else {
                break;
            }
        }

        return result * sign;
    }
};
