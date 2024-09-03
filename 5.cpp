//5.	Write a program in C++ that prints prime numbers from 300 to 500.
#include<iostream>
using namespace std;
int main()
{
	int i,j;
	cout<<"Prime numbers from 300-500 are:"<<endl;
	for(i=300;i<=500;i++)
	{
		int t=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			t+=1;
		}
		if(t==2)
		cout<<i<<endl;;
	}
}
