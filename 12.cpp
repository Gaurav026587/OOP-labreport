/*12.	Write a C++ program to read three numbers and print the following results
a.	Sum of the values.
b.	Average of three values.
c.	Largest of the three.
d.	Smallest of the three.*/

#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter 3 numbers:";
	cin>>a>>b>>c;
	cout<<"Sum of numbers:"<<a+b+c<<endl;
	
	cout<<"Average of numbers:"<<(a+b+c)/3.0<<endl;
	
	cout<<"Largest of the three:";
	if(a>b&&a>c)
	cout<<a<<endl;
	else if(b>c)
	cout<<b<<endl;
	else
	cout<<c<<endl;
	
	cout<<"Smallest of the three:";
	if(a<b&&a<c)
	cout<<a<<endl;
	else if(b<c)
	cout<<b<<endl;
	else
	cout<<c<<endl;
}
