//11.	Write a program in C++ to find sum of digits of a number using recursive function.
#include<iostream>
using namespace std;
int sum(int n)
{
    if(n<=9)
    return n;
    else
    return (n%10+sum(n/10));
}
int main()
{
	int n;
	cout<<"Enter n:";
	cin>>n;
	cout<<"Sum of digits:"<<sum(n);
}
