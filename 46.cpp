#include<iostream>

using namespace std;
class Complex
{
	private:
		double real,img;
	public:
		Complex()
		{
			real=img=0;
		}
		void read()
		{
			cout<<"Enter real & imaginary part : ";
			cin>>real>>img;
		}
		void display()
		{
			cout<<"("<<real<<" + "<<img<<"i)";
		}
		friend Complex operator *(Complex c1,Complex c2);
};
Complex operator *(Complex c1,Complex c2)
		{
			Complex temp;
			temp.real=(c1.real*c2.real)-(c1.img*c2.img);
			temp.img=(c1.real*c2.img)+(c1.img*c2.real);
			return temp;
		}
int main()
{
	Complex c1,c2,c3;
	c1.read();
	c2.read();
	c3=c1*c2;
	c1.display();
	cout<<" X ";
	c2.display();
	cout<<" = ";
	c3.display();
	return 0;
}

