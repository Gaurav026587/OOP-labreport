#include<conio.h>
#include<iostream>
using namespace std;
class Base
{
      public:
             virtual void display()
             {
                  cout<<"Display base"<<endl;
             }
             virtual void show()
             {
                     cout<<"Show base"<<endl;
             }
};
class Derived:public Base
{
      public:
             void display()
             {
                  cout<<"Display derived"<<endl;
             }
             void show()
             {
                  cout<<"Show derived"<<endl;
             }
};
int main()
{
    Base b;
    Derived d;
    Base *ptr;
    cout<<"ptr points to base"<<endl;
    ptr=&b;
    ptr->display();
    ptr->show();
    cout<<"ptr ponts to Derived"<<endl;
    ptr=&d;
    ptr->display();
    ptr->show();
    getch();
    return 0;
}

