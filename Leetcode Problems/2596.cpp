#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool isValid(vector<vector<int>>& grid, int r, int c, int n, int val) {
        if(r<0 || c<0 || r>=n || c>=n || grid[r][c] != val) {
            return false;
        }

        if(val == n*n-1) {
            return true;
        }

        int ans1 = isValid(grid, r-2, c+1, n, val+1);
        int ans2 = isValid(grid, r-1, c+2, n, val+1);
        int ans3 = isValid(grid, r+1, c+2, n, val+1);
        int ans4 = isValid(grid, r+2, c+1, n, val+1);
        int ans5 = isValid(grid, r+2, c-1, n, val+1);
        int ans6 = isValid(grid, r+1, c-2, n, val+1);
        int ans7 = isValid(grid, r-1, c-2, n, val+1);
        int ans8 = isValid(grid, r-2, c-1, n, val+1);

        return ans1 || ans2 || ans3 || ans4 || ans5 || ans6 || ans7 || ans8;
    }

    bool checkValidGrid(vector<vector<int>>& grid) {
        return isValid(grid, 0, 0, grid.size(), 0);
    }
};

int main() {
    Solution obj2596;
    vector<vector<int>> grid = {
        {0, 59, 38, 33, 30, 17, 8, 63, 60},
        {37, 34, 31, 60, 9, 62, 59, 38, 35},
        {32, 27, 16, 7, 10, 61, 18, 5, 58},
        {1, 36, 39, 64, 33, 34, 31, 12, 57},
        {26, 23, 28, 15, 6, 11, 20, 63, 24},
        {25, 2, 29, 22, 35, 32, 13, 56, 17},
        {42, 25, 24, 21, 16, 19, 62, 3, 30},
        {43, 40, 41, 26, 27, 14, 23, 18, 55},
        {48, 49, 46, 47, 28, 61, 4, 29, 2}
    };

    cout << obj2596.checkValidGrid(grid) << endl;

    return 0;
}