#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int arr[] = {4, 2, 5, 1, 3};
    sort(arr, arr+5);

    cout<<"Ascending order: ";  
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    sort(arr, arr+5, greater<int>());
    cout<<"Descending order: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    vector<int> v = {4, 2, 5, 1, 3};
    sort(v.begin(), v.end());

    for(int i = 0; i < 5; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    cout<<"Binary search: ";
    cout << binary_search(v.begin(), v.end(), 3) << endl;

    cout<<"Reverse: ";
    reverse(v.begin(), v.end());
    for(int i = 0; i < 5; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    cout<<"Max: "<< *max_element(v.begin(), v.end()) << endl;
    cout<<"Min: "<< *min_element(v.begin(), v.end()) << endl;

    return 0;
}