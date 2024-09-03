#include<iostream>
using namespace std;
class Minus{
	public:
		int x,y;
	
		Minus(int a,int b)
		{
			x=a;
			y=b;
		}
		
		Minus operator --()
		{
			x--;
			y--;
		}
		void display()
		{
			cout<<"("<<x<<","<<y<<")"<<endl;
		}
};
int main()
{
	Minus p(10,12);
	p.display();
	--p;
	p.display();
}
