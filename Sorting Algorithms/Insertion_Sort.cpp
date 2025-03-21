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

    for(int i=1;i<n;i++) {
        int curr = arr[i];
        int prev = i-1;
        
        while(prev >= 0 && arr[prev] > curr) {
            arr[prev+1] = arr[prev];
            prev--;
        }

        arr[prev+1] = curr;
    }

    cout<<"Sorted Array: ";
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}