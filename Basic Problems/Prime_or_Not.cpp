#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n == 1) {
        cout << "1 is neither prime nor composite" << endl;
    } else if (n == 2) {
        cout << "2 is a prime number" << endl;
    } else {
        bool isPrime = true;
        for (int i = 2; i <= sqrt(n); ++i) {  // Check from 2 to sqrt(n)
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << n << " is a prime number" << endl;
        } else {
            cout << n << " is not a prime number" << endl;
        }
    }
    return 0;
}