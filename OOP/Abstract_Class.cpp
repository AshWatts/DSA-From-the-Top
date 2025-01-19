#include<iostream>
using namespace std;

class Shape {                                                   // Abstract Class
    public:
    virtual void area() = 0;                                    // Pure Virtual Function, automatically makes the class abstract
};

class Circle : public Shape {
    public:
    int radius;

    Circle(int radius) {
        this->radius = radius;
    }

    void area() {
        cout<<"Radius of Circle: "<<radius<<endl;
        cout<<"Area of Circle: "<<3.14*radius*radius<<endl;
    }
};

class Rectangle : public Shape {
    public:
    int length, breadth;

    Rectangle(int length, int breadth) {
        this->length = length;
        this->breadth = breadth;
    }

    void area() {
        cout<<"Length of Rectangle: "<<length<<endl;
        cout<<"Breadth of Rectangle: "<<breadth<<endl;
        cout<<"Area of Rectangle: "<<length*breadth<<endl;
    }
};

int main() {
    Circle c1(5);
    c1.area();

    cout<<endl;

    Rectangle r1(5, 10);
    r1.area();
}