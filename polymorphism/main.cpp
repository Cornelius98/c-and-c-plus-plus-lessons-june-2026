#include <iostream>

using namespace std;

class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

class Box : public Shape {
public:
    void draw() override {
        cout << "Drawing Box" << endl;
    }
};
int main()
{
    Circle* cObject = new Circle();
    cObject->draw();

    Box* bObject = new Box();
    bObject->draw();
    return 0;
}
