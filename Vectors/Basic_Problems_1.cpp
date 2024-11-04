#include<iostream>
#include<vector>
using namespace std;
int  i = 0;

int lin_search(vector<int> vec, int k){
    for(int val : vec){
        i++;
        if(k == val){
            return val;
        }
    }
    return -1;
}

vector<int> rev_vector(vector<int> vec){
    int n = vec.size();
    for(int i=0;i<n/2;i++){
        int temp = vec[i];
        vec[i] = vec[n-i-1];
        vec[n-i-1] = temp;
    }
    return vec;
}

int main(){
    int n;
    cout<<"Enter the number of elements you want to enter: ";
    cin>>n;
    vector<int> vec;
    for(int i=0; i<n; i++){
        int x;
        cout<<"Enter element "<<i+1<<": ";
        cin>>x;
        vec.push_back(x);
    }
    cout<<endl;

    // vector<int> vec = {1, 2, 3, 4, 5};

    cout<<"Linear Search "<<endl;
    int key;
    cout<<"Enter the element you want to search: ";
    cin>>key;
    int result = lin_search(vec, key);
    if(result == -1){
        cout<<"Element not found!"<<endl;
    }
    else{
        cout<<"Element found at position "<<i<<endl;
    }
    cout<<endl;

    cout<<"Reversing the vector "<<endl;
    vector<int> rev = rev_vector(vec);
    cout<<"Reversed vector is: ";
    for(int val: rev){
        cout<<val<<" ";
    }

    return 0;       
}