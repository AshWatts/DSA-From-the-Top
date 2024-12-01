#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n = arr.size();

        for(int i=0; i<n; i++) {
            for(int j = i + 1; j<n; j++) {
                if(arr[i] == arr[j] * 2 || arr[j] == arr[i] * 2) {
                    return true;
                }
            }    
        }

        return false;
    }
};

int main() {
    Solution s;
    vector<int> v = {10, 2, 5, 3};
    cout << s.checkIfExist(v);
    return 0;
}