#include<iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        a = a % b;
        swap(a, b);
    }
    return a;
}

int lcm(int a, int b, int gcd_val) {
    return (a * b) / gcd_val;
}

int main() {
    int a, b;

    cout << "Enter the 1st number: ";
    cin >> a;
    cout << "Enter the 2nd number: ";
    cin >> b;

    int gcd_val = gcd(a, b);
    int lcm_val = lcm(a, b, gcd_val);

    cout << "GCD: " << gcd_val << endl;
    cout << "LCM: " << lcm_val << endl;

    return 0;
}
