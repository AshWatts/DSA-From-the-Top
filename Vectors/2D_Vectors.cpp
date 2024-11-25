#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int main() {
    vector<vector<int>> v = {{1, 2}, {3, 4, 5}, {6}};


    for(int i = 0; i < v.size(); i++) {                         // v.size() gives the number of rows
        for(int j = 0; j < v[i].size(); j++) {                  // v[i].size() gives the number of columns in the ith row
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}