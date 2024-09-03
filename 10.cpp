//10.	Write a program in C++ to find product of two numbers using recursive function
#include<iostream>
using namespace std;
int product(int a,int b)
{
    if(a==0|b==0)
    return 0;
    else
    return (a+ product(a,b-1));
}
int main()
{
	int a,b;
	cout<<"Enter a and b:";
	cin>>a>>b;
	cout<<"Product:"<<product(a,b);
}
