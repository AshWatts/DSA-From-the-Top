#include<iostream>
using namespace std;

pair<int, int> linear_search(int m[3][3], int r, int c, int k) {
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            if(m[i][j] == k) {
                return {i,j};
            }
        }
    }
    return {-1,-1};
}


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

    int k;
    cout<<"Enter the element to search: ";
    cin>>k;

    pair<int,int> ans = linear_search(matrix, r, c, k);

    if(ans.first != -1 && ans.second != -1) {
        cout<<"Element "<<k<<" found at index: "<<ans.first<<" "<<ans.second<<endl;
    } else {
        cout<<"Element "<<k<<" not found!"<<endl;
    }

    return 0;
}