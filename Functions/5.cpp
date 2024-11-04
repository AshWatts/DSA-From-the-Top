#include<bits/stdc++.h>
using namespace std;

void check_prime(int n){
    if(n==1){
        cout << "Neither Prime nor Composite";
        return;
    }
    for(int i=2;i<sqrt(n)+1;i++){
        if(n%i==0){
            cout << "A Composite Number";
            return;
        }
    }

    cout << "A Prime Number";
    return;
}

int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    check_prime(n);
}