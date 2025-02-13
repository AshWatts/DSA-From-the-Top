#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {1, 3, 2, 4}; 

    // Next Greater Element

    stack<int> s;
    vector<int> ans(arr.size(), 0);

    for(int i=arr.size()-1; i>=0; i--) {
        while(s.size() > 0 && s.top() <= arr[i]) {
            s.pop();
        }
        if(s.empty()) {
            ans[i] = -1;
        }
        else {
            ans[i] = s.top();
        }
        s.push(arr[i]);
    }

    for(int i=0; i<arr.size(); i++) {
        cout<<arr[i]<<" -> "<<ans[i]<<endl;
    }

    return 0;
}