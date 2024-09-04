
#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    Distance()
    {
    	feet=inches=0;
	}
	Distance(int a,int b)
	{
		feet=a;
        inches=b;	
	}
    friend Distance operator-(Distance d1,Distance d2);
    
    void display() 
	{
        cout << feet << " feet " << inches << " inches" << endl;
    }

};

Distance operator-(Distance d1,Distance d2) {
    Distance temp;
    temp.inches=d1.inches - d2.inches;
    temp.feet = d1.feet - d2.feet;
    
    if(temp.inches<0)
    {
    	temp.inches+=12;
    	temp.feet--;
	}
    return temp;
}
int main() {
    Distance d1(5, 9);  
    Distance d2(3, 11); 
    Distance d3 = d1 - d2;
    cout << "The sum of the distances is: ";
    d3.display();
}
    

