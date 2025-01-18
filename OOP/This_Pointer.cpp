#include<iostream>
using namespace std;

class teacher {
    public:
        int id;
        string name;
        teacher(int id, string name) {
            this->id = id;                                    // this pointer is used to refer to the current object, like t1 and t2 in this case
            this->name = name;
        }

        teacher(const teacher &t) {
            this->id = t.id;
            this->name = t.name;
        }

        void op_overloading(int i) {                                // Operator overloading
            int b = i;
            cout<<"int: "<<b<<endl;
        }

        void op_overloading(string s) {
            string b = s;
            cout<<"string: "<<b<<endl;
        }

        void display() {
            cout<<"ID: "<<id<<" Name: "<<name<<endl;
        }
};



int main() {
    teacher t1 = teacher(1, "John");
    teacher t2 = teacher(2, "Doe");

    teacher t3 = teacher(t1);                                // Copy constructor is called here

    t1.display();
    t2.display();
    cout<<endl;
    cout<<"Copy Constructor: "<<endl;
    t3.display();
    cout<<endl;

    t1.op_overloading(11);                                     
    t1.op_overloading("abc");

    return 0;
}