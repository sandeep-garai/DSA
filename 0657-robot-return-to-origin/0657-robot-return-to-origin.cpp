class Solution {
public:
    bool judgeCircle(string moves) {
        int L,R,U,D;
        L=R=D=U=0;
        for(char m: moves){
            if(m=='L')  L++;
            else if(m=='R') R++;
            else if(m=='U') U++;
            else if(m=='D') D++;
        }
        return (L==R && U==D);
    }
};