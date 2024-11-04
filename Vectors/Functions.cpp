#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<char> vec = {'a', 'b', 'c', 'd', 'e'};

    cout<<"Vector elements are: ";
    for(char val: vec){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"Size of vector is: "<<vec.size()<<endl;
    cout<<"Capacity of vector is: "<<vec.capacity()<<endl;
    cout<<endl;

    vec.push_back('f');
    cout<<"After pushing an element, vector size is: ";
    cout<<vec.size()<<endl;
    cout<<"After pushing an element, vector capacity is: ";
    cout<<vec.capacity()<<endl;
    cout<<"New Vector elements are: ";
    for(char val: vec){
        cout<<val<<" ";
    }
    cout<<endl<<endl;

    vec.pop_back();
    cout<<"After popping an element, vector size is: ";
    cout<<vec.size()<<endl;
    cout<<"After popping an element, vector capacity is: ";
    cout<<vec.capacity()<<endl;
    cout<<"New Vector elements are: ";
    for(char val: vec){
        cout<<val<<" ";
    }
    cout<<endl<<endl;

    cout<<"Starting element of vector is: "<<vec.front()<<endl;
    cout<<"Ending element of vector is: "<<vec.back()<<endl;

    cout<<"Accessing 2nd element of vector using at: "<<vec.at(1)<<endl;

    cout<<"Is vector empty? "<<vec.empty()<<endl;

    return 0;
}