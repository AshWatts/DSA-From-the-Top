#include<iostream>
using namespace std;

int changeA(int* ptr) {                   // Pass by Reference using pointers
    *ptr = 20;
}

int changeA(int& z) {                   // Pass by Reference using alias
    z = 20;                             // Here & is used to show it is an alias, not for address storage!!!
}

int main() {
    cout<<endl;

    // * -> Dereferance Operator and Multiplication
    // & -> Bitwise AND, Address of a variable and Alias

    int a = 10;
    cout<<"a: "<<a<<endl;
    cout<<"Address of a: "<<&a<<endl;

    int* b = &a;
    cout<<"Address of a through a pointer b: "<<b<<endl<<endl; 
    cout<<"Address of b: "<<&b<<endl;

    int** c = &b;
    cout<<"Address of the pointer b through another pointer c: "<<c<<endl<<endl;

    cout<<"Value of a through dereferance operator(*): "<<*(&a)<<endl;
    cout<<"Value of a through dereferance operator(*) and pointer b: "<<*b<<endl;
    cout<<"Value of a through dereference operator(*) and pointer of pointer b: "<<**c<<endl<<endl;

    int* d = NULL;
    cout<<"Null Pointer d: "<<d<<endl<<endl;

    changeA(&a);
    cout<<"Changing the value of a using pass by reference using pointers: "<<a<<endl;

    changeA(a);
    cout<<"Changing the value of a using pass by reference using alias: "<<a<<endl<<endl;

    int arr[] = {1,2,3};
    cout<<"Array: ";
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Address of the array: "<<arr<<endl;
    cout<<"1st Element using arr pointer: "<<*arr<<endl;
    cout<<"2nd Element using arr pointer: "<<*(arr+1)<<endl;

    cout<<endl;
    return 0;
}