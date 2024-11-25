#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
    int matrix[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int n = 3;

    cout<<"Given Matrix: "<<endl;;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    int sum = 0;

    // for(int i=0;i<n;i++) {
    //     for(int j=0;j<n;j++) {
    //         if(i == j || i + j == n-1) {
    //             sum += matrix[i][j];
    //         }
    //     }
    // }

    for(int i=0;i<n;i++) {
        sum += matrix[i][i];
        if(i != n-i-1) {
            sum += matrix[i][n-i-1];
        }
    }

    cout<<"Diagonal Matrix Sum: "<<sum<<endl;;

    return 0;
}