#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    bool change = false;

    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++) {
        change = false;

        for(int j=0;j<n-i-1;j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                change = true;
            }
        }

        if(change == false) {
            break;
        }
    }

    cout<<"Sorted Array: ";
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}