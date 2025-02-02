#include<iostream>
#include<unordered_map>
using namespace std;

int main() {
    int n = 5;
    int arr[n] = {1, 2, 3, 2, 5};

    // int hash[10000] = {0};
    // for(int i = 0; i < n; i++) {
    //     hash[arr[i]]++;
    // }

    unordered_map<int, int> hash;
    for(int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    cout<<"Element -> Frequency"<<endl;
    for(auto i : hash) {
        cout << i.first << " -> " << i.second << endl;
    }

    int q;
    cin >> q;
    while(q--) {
        int x;
        cin >> x;
        cout << hash[x] << endl;
    }

    return 0;
}