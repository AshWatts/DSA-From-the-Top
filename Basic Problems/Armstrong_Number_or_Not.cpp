#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n;
    cout<<"Enter the Number: ";
    cin>>n;

    int num = n;
    int sum = 0;

    while(n > 0) {
        int z = n % 10;
        sum += z*z*z;
        n /= 10;
    }

    if(sum == num) {
        cout<<"Armstrong Number"<<endl;
    } else {
        cout<<"Not an Armstrong Number"<<endl;
    }

    return 0;
}