#include<iostream>
using namespace std;

// int bin_s (int arr[], int k, int start, int end) {           // Recursive Approach
//     int mid = start + (end - start) / 2;
//     if(arr[mid] == k) {
//         return mid;
//     }
//     else if(arr[mid] > k) {
//         bin_s(arr, k, start, mid-1);
//     }
//     else{
//         bin_s(arr, k, mid + 1, end);
//     }
//     return -1; 
// }

int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Sorted Array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the element to be searched: ";
    cin>>k;

    int start = 0;
    int end = n-1;

    while(start <= end) {
        int mid = start + (end - start) / 2;          // IMP Optimization
        if(k == arr[mid]) {
            cout<<"Element is at index "<<mid;
            return 0;
        }
        else if(k > arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    cout<<"Element not Found!";

    return 0;
}