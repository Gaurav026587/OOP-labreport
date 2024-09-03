#include<iostream>
using namespace std;
class shape{
	protected:
		double base,height;
	public:
	    shape()
		{
			base=height=0;
		}	
		shape(double b,double h)
		{
			base=b;
			height=h;
		}
};
class triangle:public shape{
	public:
		triangle(double b,double h):shape(b,h){}
		
		int area()
		{
			return 0.5*base*height;
		}
};

class rectangle:public shape{
	public:
		rectangle(double b,double h):shape(b,h){}
		int area()
		{
			return base*height;
		}
};
int main()
{
	triangle a(3,4);
	rectangle b(5,6);
	cout<<"Triangle area:"<<a.area()<<endl;
	cout<<"Rectangle area:"<<b.area();
}
