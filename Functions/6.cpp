#include <bits/stdc++.h>
using namespace std;

bool prime_or_not(int n) {
    if (n < 2){
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void prime_until_n(int n) {
    cout << "Prime Numbers until " << n << ": " << endl;
    for (int i = 2; i <= n; i++) {
        if (prime_or_not(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    prime_until_n(n);
}
