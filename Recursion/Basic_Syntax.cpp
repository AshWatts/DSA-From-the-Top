#include<iostream>
#include<vector>
using namespace std;

void print_number(int n) {                                // Time Complexity: O(n)
    if(n == 0) {
        return;
    }
    cout << n << " ";
    print_number(n-1);
} 

int print_fact(int n) {                                    // Time Complexity: O(n)
    if(n == 0) {
        return 1;
    }
    return n * print_fact(n-1);
}

int sum_numbers(int n) {                                   // Time Complexity: O(n)
    if(n == 0) {
        return 0;
    }
    return n + sum_numbers(n-1);
}

int fib(int n) {                                           // Time Complexity: O(2^n)
    if(n == 0 || n == 1) {
        return n;
    }
    return fib(n-1) + fib(n-2);
}

bool is_sorted(vector<int> v, int n) {                     // Time Complexity: O(n), IMP WAY OF RECURSION
    if(n == 0 || n == 1) {
        return true;
    }
    return (v[n-1] >= v[n-2]) && is_sorted(v, n-1);
}

int binary_search(vector<int> v, int k, int start, int end) {
    if(start > end) {
        return -1;
    }

    int mid = start + (end - start) / 2;

    if(v[mid] > k) {
        return binary_search(v, k, start, mid - 1);
    }
    else if(v[mid] < k) {
        return binary_search(v, k, mid + 1, end);
    }
    else {
        return mid;
    }
}



int main() {
    int n = 5;                                              // 5 4 3 2 1 
    print_number(n);
    cout << endl;
    cout << print_fact(n) << endl;                          // 120
    cout << sum_numbers(n) << endl;                         // 15
    cout << fib(n) << endl;                                 // 5

    vector<int> v1 = {1, 2, 3, 4, 5};
    cout << is_sorted(v1, v1.size()) << endl;               // 1

    vector<int> v2 = {1, 2, 3, 4, 5, 1};
    cout << is_sorted(v2, v2.size()) << endl;               // 0

    vector<int> v3 = {1, 2, 3, 4, 5, 6};
    cout << binary_search(v3, 5, 0, v3.size()-1) << endl;   // 4

    vector<int> v4 = {1, 2, 3, 4, 5, 6};
    cout << binary_search(v4, 7, 0, v4.size()-1) << endl;   // -1

    return 0;
}