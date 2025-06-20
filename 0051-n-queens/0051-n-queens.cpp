class Solution {
public:
    bool isSafe(int row, int col, int n, vector<string>&board){
        int drow= row;
        int dcol= col;

        while(row>=0 && col>=0){    //left to right diagonal
            if(board[row][col]=='Q')    return false;
            row--;
            col--;
        }
        row=drow;
        col=dcol;
        while(col>=0){              //left check
            if(board[row][col]=='Q')    return false;
            col--;
        }
        row=drow;
        col=dcol;
        while(row< n && col>=0){    //right to left diagonal
            if(board[row][col]=='Q')    return false;
            row++;
            col--;
        }
        return true;
    }
    void arrange(int col, vector<string>&board, vector<vector<string>>&ans,int n){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(isSafe(row,col,n,board)){
                board[row][col]='Q';
                arrange(col+1,board,ans,n);
                board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        arrange(0,board,ans,n);
        return ans;
    }
};