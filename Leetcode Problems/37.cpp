#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:

    bool issafe(vector<vector<char>>& board, int row, int col, char dig) {
        for (int i = 0; i < 9; i++) {
            if (board[row][i] == dig) {
                return false;
            }
        }

        for (int i = 0; i < 9; i++) {
            if (board[i][col] == dig) {
                return false;
            }
        }

        int srow = (row / 3) * 3;
        int scol = (col / 3) * 3;

        for (int i = srow; i <= srow + 2; i++) {
            for (int j = scol; j <= scol + 2; j++) {
                if (board[i][j] == dig) {
                    return false;
                }
            }
        }

        return true;
    }

    bool SS(vector<vector<char>>& board, int row, int col) {
        if (row == 9) {
            return true;
        }

        int next_row = row;
        int next_col = col + 1;
        if (next_col == 9) {
            next_row = row + 1;
            next_col = 0;
        }

        if (board[row][col] != '.') {
            return SS(board, next_row, next_col);
        }

        for (char dig = '1'; dig <= '9'; dig++) {
            if (issafe(board, row, col, dig)) {
                board[row][col] = dig;
                if (SS(board, next_row, next_col)) {
                    return true;
                }
                board[row][col] = '.';
            }
        }

        return false;
    }

    void solveSudoku(vector<vector<char>>& board) {
        SS(board, 0, 0);
    }
};


int main() {
    Solution s;
    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
    };

    s.solveSudoku(board);

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}