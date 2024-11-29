#include<iostream>
#include<vector>
using namespace std;

void print_subsets(vector<int> &v, vector<int> &ans, int i) {              // Time Complexity: O(2^n)
    if(i == v.size()) {
        for(int x : ans) {
            cout<<x<<" ";
        }
        cout<<endl;
        return;
    }

    ans.push_back(v[i]);
    print_subsets(v, ans, i+1);

    ans.pop_back();
    print_subsets(v, ans, i+1);
}

int main() {
    vector<int> v = {1, 2, 3};
    vector<int> ans;
    print_subsets(v, ans, 0);
    return 0;
}