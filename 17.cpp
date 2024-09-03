//17.	Write a function power () to raise a number m to a power n. The function takes a double value for m and int value for n, and returns the result correctly. Use a default value of 2 for n to make the function to calculate squares when this argument is omitted. Write a main that gets the value of m and n from the user to test the function.
#include<iostream>
using namespace std;
int power(double m,int n=2)
{
	int a=1;
	for(int i=0;i<n;i++)
	a=a*m;
	return a;
}
int main()
{
	double m;
	int n;
	cout<<"Enter m and n:";
	cin>>m>>n;
	cout<<m<<" powered "<<n<<"="<<power(m,n)<<endl;
	cout<<"Square of "<<m<<":"<<power(m);
}

