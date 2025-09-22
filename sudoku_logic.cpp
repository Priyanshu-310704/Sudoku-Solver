#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
    bool isSafe(vector<vector<char>>& board,int r,int c,int num){
        for(int i=0;i<9;i++){
            if(board[r][i]-'0'==num)return false;
        }
        for(int i=0;i<9;i++){
            if(board[i][c]-'0'==num)return false;
        }
        for(int i = (r/3)*3; i <= (r/3)*3+2 ; i++){
            for(int j = (c/3)*3 ;j <= (c/3)*3+2 ;j++){
                if(board[i][j]-'0'==num)return false;
            }
        }
        return true;
    }
    bool f(vector<vector<char>>& board,int r,int c){
        if(r==9)return true;
        if(c==9)return f(board,r+1,0);
        if(board[r][c]!='.')return f(board,r,c+1);
        bool flag;
        for(int i=1;i<=9;i++){
            if(isSafe(board,r,c,i)){
                board[r][c]=i+'0';
                flag=f(board,r,c+1);
                if(flag==true)return true;
                else board[r][c]='.';
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        f(board,0,0);
    }
    
};
int main(){
        vector<vector<char>> board = {
            {'5','3','.','.','7','.','.','.','.'},
            {'6','.','.','1','9','5','.','.','.'},
            {'.','9','8','.','.','.','.','6','.'},
            {'8','.','.','.','6','.','.','.','3'},
            {'4','.','.','8','.','3','.','.','1'},
            {'7','.','.','.','2','.','.','.','6'},
            {'.','6','.','.','.','.','2','8','.'},
            {'.','.','.','4','1','9','.','.','5'},
            {'.','.','.','.','8','.','.','7','9'}
        };
        Solution S;
        S.solveSudoku(board);
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                cout << board[i][j] << " ";
                if ((j + 1) % 3 == 0 && j != 8) cout << "| ";
            }
            cout << "\n";
            if ((i + 1) % 3 == 0 && i != 8) {
                cout << "------+-------+------\n";
            }
        }


    }