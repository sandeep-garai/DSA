class Solution {
public:
    bool judgeCircle(string moves) {
        int ver = 0;
        int hor = 0;
        for (char ch : moves) {
            switch (ch) {
                case 'U' : ver++; break;
                case 'D' : ver--; break;
                case 'R' : hor++; break;
                case 'L' : hor--; break;
            }
        }
        return ver == 0 && hor == 0;
    }
};