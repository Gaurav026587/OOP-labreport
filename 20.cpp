#include<iostream>
using namespace std;
class number{
	private:
		int x,y;
	public:
		number()
		{
			x=y=0;
		}
		
		void read()
		{
			cout<<"Enter 2 numbers:";
			cin>>x>>y;
		}
		
		int getMax()
		{
			if(x>y)
			return x;
			else
			return y;
		}
};
int main()
{
	number n;
	n.read();
	cout<<"Largest number:"<<n.getMax();
}
