#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter a number:";
	cin>>a;
	while(a!=0)
	{
		b=a%10;
		c=c*10+b;
		a=a/10;
	}
	cout<<"Reverse="<<c;
	return 0;
}
