#include<bits/stdc++.h>
using namespace std;

int sum_upto_n(int n){
    int sum = 0;
    for(int i=0;i<n+1;i++){
        sum+=i;
    }
    return sum;
}

int product_upto_n(int n){
    int p = 1;
    for(int i=1;i<n+1;i++){
        p*=i;
    }
    return p;
}

int main() {
    cout << sum_upto_n(10) << endl;
    cout << sum_upto_n(100) << endl;

    cout << product_upto_n(5) << endl;
    cout << product_upto_n(10) << endl;
    return 0;
}