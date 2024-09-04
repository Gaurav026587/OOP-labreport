#include <iostream>

using namespace std;

class ClassA {
private:
    int a;

public:
    ClassA(int x = 0) : a(x) {}

    void display()  {
        cout << "Value in ClassA: " << a << endl;
    }

    int getA() const {
        return a;
    }
};

class ClassB {
private:
    int b;

public:
    ClassB(int y = 0) : b(y) {}

    ClassB( ClassA &objA) {
        b = objA.getA();
    }

    void display() const {
        cout << "Value in ClassB: " << b << endl;
    }
};

int main() {
    ClassA objA(58);
    objA.display();

    ClassB objB = objA;
    objB.display();

    return 0;
}

