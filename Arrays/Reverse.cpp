#include<bits/stdc++.h>
using namespace std;

// void rev_array(int arr[],int n){
//     for(int i=0;i<n/2;i++){
//         int temp = arr[i];
//         arr[i] = arr[n-i-1];
//         arr[n-i-1] = temp;
//     }
// }

void rev_array(int arr[], int n){                     // 2 Pointers approach and hence BETTER
    int i = 0;
    int j = n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
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

    cout<<"Original array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    rev_array(arr,n);

    cout<<"Reversed array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}