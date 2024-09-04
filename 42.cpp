
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
    Distance operator -(Distance d2) {
    	Distance temp;
    temp.inches=inches - d2.inches;
    temp.feet = feet - d2.feet;
    
	if(temp.inches<0)
	{
		temp.inches+=12;
		temp.feet--;
	}
    return temp;
}
    
    void display() 
	{
        cout << feet << " feet " << inches << " inches" << endl;
    }

};



int main() {
    Distance d1(5, 9);  
    Distance d2(3, 11); 
    Distance d3 = d1 - d2;
    cout << "The sum of the distances is: ";
    d3.display();
}
    

