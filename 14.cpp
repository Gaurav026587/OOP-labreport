//14.	Write a program in C++to compute the area of circle and area of triangle by overloading the area () function. 
#include<iostream>
using namespace std;
float area(int r)
{
	return 3.14*r*r;
}
float area(int b,int h)
{
	return 0.5*(b*h);
}
int main()
{
	cout<<"Area of circle:"<<area(5)<<endl;
	cout<<"Area of triangle:"<<area(11,3)<<endl;
}
