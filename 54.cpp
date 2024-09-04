#include <iostream>
using namespace std;
class Class {
private:
    int value;

public:
    
    Class(int v) : value(v) {}
    void display()  {
        cout << "Value: " << value << endl;
    }
    void setValue(int v) {
        this->value = v; 
    }


    Class& getThis() {
        return *this;  
    }
    void showAddress()  {
        cout << "Address of this object: " << this << endl;
    }
};

int main() {
    Class obj1(10);
    Class obj2(20);

    obj1.display();
    obj2.display();

    obj1.setValue(30);
    obj1.display();  

    obj1.showAddress();  
    obj2.showAddress();  

    Class ref = obj1.getThis(); 
    ref.display();  

    return 0;
}

