#include<bits/stdc++.h>
using namespace std;

int add(int arr[],int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    return sum;
}

int multiply(int arr[],int n){
    int product = 1;
    for(int i=0;i<n;i++){
        product *= arr[i];
    }
    return product;
}

void swap_max_and_min(int arr[], int n){
    int x=0;
    int y=0;
    int largest = INT_MIN;
    int smallest = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest = arr[i];
            x=i;
        }
        if(arr[i]<smallest){
            smallest = arr[i];
            y=i;
        }
    }
    swap(arr[x],arr[y]);
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

    cout<<"Original Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int a = add(arr,n);
    cout<<"Sum of Elements: "<<a<<endl;

    int b = multiply(arr,n);
    cout<<"Product of Elements: "<<b<<endl;

    swap_max_and_min(arr,n);
    cout<<"Swapping Max and Min Elements: ";  
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}