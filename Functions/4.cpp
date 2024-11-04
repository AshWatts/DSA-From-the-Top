#include<bits/stdc++.h>
using namespace std;

int fact(int a){
    int fact = 1;
    for(int i=1;i<a+1;i++){
        fact*=i;
    } 
    return fact;
}

float nCr(int n, int r){
    float result = (fact(n))/(fact(r)*fact(n-r));
    return result;
}

int main(){
    int n,r;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter r: ";
    cin>>r;
    cout<<nCr(n,r)<<endl;
}