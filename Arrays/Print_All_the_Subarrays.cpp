#include<iostream>
#include<vector>
using namespace std;

int main(){
    // int n;
    // cout<<"Enter the number of elements you want to enter: ";
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cout<<"Enter element "<<i+1<<": ";
    //     cin>>arr[i];
    // }
    // cout<<endl;

    int n = 5;
    int arr[n] = {1,2,3,4,5};

    cout<<"All the possible subarrays are: "<<endl;
    for(int st=0;st<n;st++){
        for(int end=st;end<n;end++){
            for(int i=st;i<=end;i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}