#include<iostream>
#include<vector>
using namespace std;

// class Solution {                                                        // Brute Force, O(m*n)
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         for(int i=0;i<matrix.size();i++) {
//             for(int j=0;j<matrix[i].size();j++) {
//                 if(matrix[i][j] == target) {
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
// };

class Solution {                                                          // Binary Search, O(log(m) + log(n))
public:
    bool searchMatrix(vector<vector<int>>& v, int target) {
        int m = v.size();
        int n = v[0].size();

        int srow = 0;
        int erow = m - 1;

        while(srow <= erow) {
            int mrow = srow + (erow - srow) / 2;

            if(target >= v[mrow][0] && target <= v[mrow][n-1]) {
                int s = 0;
                int e = n-1;

                while(s <= e) {
                    int m = s + (e - s)/2;
                    if(target == v[mrow][m]) {
                        return true;
                    }
                    else if(target < v[mrow][m]) {
                        e = m - 1;
                    }
                    else {
                        s = m + 1;
                    }
                }
                return false;
            }
            else if(target > v[mrow][n-1]) {
                srow = mrow + 1;
            }
            else {
                erow = mrow - 1;
            }
        }
        return false;
    }
};

int main() {
    Solution s;
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    cout << s.searchMatrix(matrix, 3) << endl;
}