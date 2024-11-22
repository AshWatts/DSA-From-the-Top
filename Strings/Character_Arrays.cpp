#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char arr[] = "abcde";

    cout<<"Entered string: "<<arr<<endl;

    cout<<"Length of string: "<<strlen(arr)<<endl;

    char arr1[100];
    cout<<"Enter a string: ";
    cin.getline(arr1, 100);                            // Read till '\n' is encountered
    cout<<"Entered string: "<<arr1<<endl;

    char arr2[100];
    cout<<"Enter a string: ";
    cin.getline(arr2, 100, '.');                        // Read till '.' is encountered
    cout<<"Entered string: "<<arr2<<endl;

    char arr3[100];
    cout<<"Enter a string: ";
    cin>>arr3;                                          // Read till ' ' is encountered
    cout<<"Entered string: "<<arr3<<endl;

    return 0;
}