#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cout<<"Enter the Number: ";
    cin>>n;

    vector<int> ans;

    while(n > 0) {                                   // Or while(n != 0)
        int z = n % 10;
        ans.push_back(z);
        n /= 10;
    }

    cout<<"Digits in the Number: ";
    for(int i=ans.size()-1;i>=0;i--) {
        cout<<ans[i]<<" ";
    }

    return 0;
}