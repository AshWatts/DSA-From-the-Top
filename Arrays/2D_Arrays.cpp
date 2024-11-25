#include<iostream>
#include<vector>
using namespace std;

class operations {
    public:
    bool linear_search(int m[4][3], int r, int c, int k) {                       // Can use just m[][3] instead of m[4][3]
        for(int i=0;i<r;i++) {
            for(int j=0;j<c;j++) {
                if(m[i][j] == k) {
                    return true;
                }
            }
        }
        return false;
    }
};

int main() {
    int matrix[4][3] = {{1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}};
    // int matrix[4][3];
    int r = 4;
    int c = 3;

    // cout<<"Enter the elements: ";
    // for(int i=0;i<r;i++) {
    //     for(int j=0;j<c;j++) {
    //         cin>>matrix[i][j];
    //     }
    // }
    // cout<<endl;

    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"Searching for element 18: ";    
    operations op;
    if(op.linear_search(matrix, r, c, 18)) {
        cout<<"Element found!"<<endl;
    } else {
        cout<<"Element not found!"<<endl;
    }

    return 0;
}