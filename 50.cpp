#include <iostream>

using namespace std;

class ClassB;  

class ClassA {
private:
    int a;

public:
 
    ClassA(int x = 0) : a(x) {}

   
    operator ClassB();  

   
    void display() 
    {
        cout << "Value in ClassA: " << a << endl;
    }


    int getA()
    {
        return a;
    }
};

class ClassB {
private:
    int b;

public:

    ClassB(int y = 0) : b(y) {}


    void display() 
    {
        cout << "Value in ClassB: " << b << endl;
    }


    void setB(int y) {
        b = y;
    }
};


ClassA::operator ClassB() {
    ClassB objB;
    objB.setB(a);
    return objB;
}

int main() {
    ClassA objA(42); 
    objA.display();

    ClassB objB = objA;  
    objB.display();

    return 0;
}

