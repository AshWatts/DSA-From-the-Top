#include<iostream>
#include<limits.h>
using namespace std;

// int max_sum(int arr[], int n){                    BRUTE FORCE APPROACH
//     int max_sum = INT_MIN;
//     for(int st=0;st<n;st++){
//         int curr_sum = 0;
//         for(int end=st;end<n;end++){
//             curr_sum += arr[end];
//             max_sum = max(max_sum,curr_sum);
//         }
//     }
//     return max_sum;
// }

int max_sum(int arr[], int n){                         //Kadane's Algorithm
    int max_sum = INT_MIN;
    int curr_sum = 0;
        
    for(int i=0;i<n;i++){
        curr_sum +=arr[i];
        max_sum = max(curr_sum, max_sum);
        if(curr_sum<0){
            curr_sum = 0;
        }
    }
    return max_sum;
}

int main(){
    int n;
    cout<<"Enter the number of elements you want to enter: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<endl;

    // int n = 7;
    // int arr[n] = {3,-4,5,4,-1,7,-8};

    cout<<"Maximum Subarray Sum is: "<<max_sum(arr,n)<<endl;

    return 0;
}