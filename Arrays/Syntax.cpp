#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr1[4] = {1, 2, 3, 4};
    for(int i=0; i<4; i++){
        cout<<arr1[i]<<" ";
    }

    cout<<endl;

    int arr2[] = {1,2,3};               // If no value is given inside [] then it will automatically calculate the size of array
    for(int i=0; i<3; i++){
        cout<<arr2[i]<<" ";
    }

    return 0;
}