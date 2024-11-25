#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int target) {
        int m = v.size();
        int n = v[0].size();

        int r = 0;
        int c = n - 1;

        while(c >= 0 && r < m) {
            if(target == v[r][c]) {
                return true;
            }
            else if(target < v[r][c]) {
                c--;
            }
            else {
                r++;
            }
        }
        return false;
    }
};

int main() {
    Solution s;
    vector<vector<int>> v = {{1,4,7,11,15}, {2,5,8,12,19}, {3,6,9,16,22}, {10,13,14,17,24}, {18,21,23,26,30}};
    cout << s.searchMatrix(v, 5) << endl;
    return 0;
}