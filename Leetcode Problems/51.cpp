#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:

    bool is_safe(vector<string> &board, int row, int col, int n) {
        for(int i=0; i<n; i++) {            
            if(board[row][i] == 'Q') {
                return false;
            }
        }

        for(int i=0; i<n; i++) {
            if(board[i][col] == 'Q') {
                return false;
            }
        }      

        for(int i=row, j=col; i>=0 && j>=0; i--, j--) {
            if(board[i][j] == 'Q') {
                return false;
            }
        }

        for(int i=row, j=col; i>=0 && j<n; i--, j++) {
            if(board[i][j] == 'Q') {
                return false;
            }
        }

        return true;
    }

    void NQueens(vector<string> &board, int row, int n, vector<vector<string>> &ans) {
        if(row == n) {
            ans.push_back({board});
            return;
        }

        for(int i=0; i<n; i++) {
            if(is_safe(board, row, i, n)) {
                board[row][i] = 'Q';
                NQueens(board, row+1, n, ans);
                board[row][i] = '.';
            }
        }
    }


    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        vector<vector<string>> ans;

        NQueens(board, 0, n, ans);
        return ans;
    }
};

int main() {
    Solution s;
    vector<vector<string>> ans = s.solveNQueens(4);
    for(auto i: ans) {
        for(auto j: i) {
            cout<<j<<endl;
        }
        cout<<endl;
    }
    return 0;
}