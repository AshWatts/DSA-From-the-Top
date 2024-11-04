#include<bits/stdc++.h>
using namespace std;

int sum_of_digits(int n){
    int total = 0;
    int d;
    while(n>0){
        d = n%10;
        total+=d;
        n = n / 10;
    }
    return total;
}

int main(){
    cout<<sum_of_digits(14347);
}