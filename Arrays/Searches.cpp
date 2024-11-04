#include<bits/stdc++.h>
using namespace std;

int linear_search(int arr[], int n, int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int k;
    cout<<"Enter the element to be searched: ";
    cin>>k;

    int index = linear_search(arr, n, k);
    if(index!=-1){
        cout<<"Element found at index: "<<index<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }

    return 0;
}