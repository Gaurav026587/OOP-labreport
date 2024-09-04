#include <iostream>

using namespace std;

class Base {
public:
    virtual void display()  {
        cout << "Display from Base class." << endl;
    }
};

class Derived : public Base {
public:
    void display()  #include <iostream>

using namespace std;

class Base {
public:
    virtual void display() const {
        cout << "Display from Base class." << endl;
    }
};

class Derived : public Base {
public:
    void display() const override {
        cout << "Display from Derived class." << endl;
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;

    Base* basePtr;

    basePtr = &baseObj;
    basePtr->display();

    basePtr = &derivedObj;
    basePtr->display();

    return 0;
}
 {
        cout << "Display from Derived class." << endl;
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;

    Base* basePtr;

    basePtr = &baseObj;
    basePtr->display();

    basePtr = &derivedObj;
    basePtr->display();

    return 0;
}

