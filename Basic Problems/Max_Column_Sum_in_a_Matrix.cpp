#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
    int matrix[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int r = 3;
    int c = 3;

    cout<<"Given Matrix: "<<endl;;
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    int max_sum = INT_MIN;

    for(int i=0;i<r;i++) {
        int sum = 0;
        for(int j=0;j<c;j++) {
            sum += matrix[j][i];
        }
        max_sum = max(max_sum, sum);
    }

    cout<<"Maximum sum of row in the matrix is: "<<max_sum<<endl;

    return 0;
}