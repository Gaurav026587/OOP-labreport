#include<iostream>
using namespace std;
int prime(int n)
{
	int t=0;
	for(int i=1;i<=n;i++)
    {
    	if(n%i==0)
    	t+=1;
	}
	if(t==2)
	return 1;
	else 
	return 0;
}
int main()
{
	int n;
	cout<<"Enter a number:";
	cin>>n;
	if(prime(n)==1)
	cout<<"Prime";
	else 
	cout<<"Composite";
}
