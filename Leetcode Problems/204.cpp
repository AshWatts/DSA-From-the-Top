#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        int ans = 0;
        vector<bool> isPrime(n+1, true);
        
        for(int i=2; i<n; i++) {
            if(isPrime[i]) {
                ans++;
                for(int j = i * 2; j < n; j = j + i) {
                    isPrime[j] = false;
                }
            }
        }
        return ans;
    }
};

int main() {
    Solution obj;
    int n = 10;
    cout << "Count of Primes until "<<n<<": " << obj.countPrimes(n) << endl;
    return 0;
}