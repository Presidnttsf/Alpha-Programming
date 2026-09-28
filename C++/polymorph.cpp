#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() {
        cout << "Generic shape area" << endl;
    }
};

class Circle : public Shape {
public:
    void area() override {
        float radius = 5;
        cout << "Circle Area = " << 3.14 * radius * radius << endl;
    }
};

class Rectangle : public Shape {
public:
    void area() override {
        float length = 10;
        float width = 5;
        cout << "Rectangle Area = " << length * width << endl;
    }
};


int add (int a, int b) {
return a+b;
}

template <typename T>
T addt(T a, T b) {
  return a + b;
}


int main() {

    Shape *shape;

    Circle c;
    Rectangle r;

    shape = &c;
    shape->area();

    shape = &r;
    shape->area();

    cout << add(10, 2) << endl;
    cout << addt(10.1, 2.2) << endl;
    cout << addt<string>("tauseef ", "akhtar") << endl;
    cout << addt<string>("B", "A") << endl;


    return 0;
}
