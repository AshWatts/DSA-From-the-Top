#include<iostream>
using namespace std;

class Person {
    public:
    string name;
    int age;

    Person() {
        cout<<"Default Parent Constructor"<<endl;
    }

    void display() {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

class Student : public Person {
    public:
    int rollno;

    Student() {
        cout<<"Default Child Constructor"<<endl;
    }

    Student(string name, int age, int rollno) {
        cout<<endl<<"Parameterized Child Constructor"<<endl;
        this->name = name;
        this->age = age;
        this->rollno = rollno;
    }

    void display() {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll No: "<<rollno<<endl;
    }
};

int main() {
    Student s1;
    cout<<endl;
    s1.name = "John";
    s1.age = 20;
    s1.rollno = 101;

    cout<<"Name: "<<s1.name<<endl;
    cout<<"Age: "<<s1.age<<endl;
    cout<<"Roll No: "<<s1.rollno<<endl;
    cout<<endl;

    Person p1;
    p1.name = "Doe";
    p1.age = 21;
    p1.display();

    Student s2("Doe", 21, 102);
    cout<<endl;

    s2.display();
    cout<<endl;

    return 0;
}