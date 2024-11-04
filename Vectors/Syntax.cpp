#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v1;
    vector<int> v2 = {1, 2, 3, 4, 5};
    vector<int> v3(7, 10);

    cout << "Size of v1: " << v1.size() << endl; 
    cout << "Size of v2: " << v2.size() << endl;
    cout << "Size of v3: " << v3.size() << endl;

    cout<<"Elements of v1: ";
    // for(int i = 0; i < v1.size(); i++){
    //     cout << v1[i] << " ";
    // }
    for(int val : v1){
        cout << val << " ";
    }
    cout<<endl;

    cout<<"Elements of v2: ";
    // for(int i = 0; i < v2.size(); i++){
    //     cout << v2[i] << " ";
    // }
    for(int val : v2){
        cout << val << " ";
    }
    cout<<endl;

    cout<<"Elements of v3: ";
    // for(int i = 0; i < v3.size(); i++){
    //     cout << v3[i] << " ";
    // }
    for(int val : v3){
        cout << val << " ";
    }
    cout<<endl;

    return 0;
}