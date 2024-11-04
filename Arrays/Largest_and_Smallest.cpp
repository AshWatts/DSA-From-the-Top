#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // cout<<"Largest Element: "<<*max_element(arr, arr+n)<<endl;
    // cout<<"Smallest Element: "<<*min_element(arr, arr+n)<<endl;

    int highest = INT_MIN;
    int lowest = INT_MAX;
    for(int i=0;i<n;i++){
        // highest = max(highest, arr[i]);
        // lowest = min(lowest, arr[i]);
        if(arr[i]>highest){
            highest = arr[i];
        }
        if(arr[i]<lowest){
            lowest = arr[i];
        }
    }

    cout<<"Largest Element: "<<highest<<endl;
    cout<<"Smallest Element: "<<lowest<<endl;

    return 0;
}