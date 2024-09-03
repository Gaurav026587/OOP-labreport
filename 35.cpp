#include<iostream>
using namespace std;
class Plus{
	public:
		int x,y;
	
		Plus(int a,int b)
		{
			x=a;
			y=b;
		}
		
		Plus operator ++()
		{
			++x;
			++y;
		}
		void display()
		{
			cout<<"("<<x<<","<<y<<")"<<endl;
		}
};
int main()
{
	Plus p(10,12);
	p.display();
	++p;
	p.display();
}
