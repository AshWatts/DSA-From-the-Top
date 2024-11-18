#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++) {
        int small = i;
        for(int j=i+1;j<n;j++) {
            if(arr[j] < arr[small]) {
                small = j;
            }
        }
        swap(arr[small], arr[i]);
    }

    cout<<"Sorted Array: ";
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }

    return 0;

}