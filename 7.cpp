//7.	Write a C++ program that computes simple interest using default arguments function
#include<iostream>
using namespace std;
float si(int p,int t,float r=2)
{
	return (p*t*r)/100;
}
int main()
{
	int p,t,r;
	cout<<"Enter pricipal,time and rate:";
	cin>>p>>t>>r;
	cout<<"Simple interest using default argument:"<<si(p,t)<<endl;
	cout<<"Simple Interest without default argument:"<<si(p,t,r);
}
