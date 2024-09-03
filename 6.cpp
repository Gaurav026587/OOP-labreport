//6.	Write a program in C++ that reads two numbers n1 and n2 and then print all prime numbers between n1 and n2
#include<iostream>
using namespace std;
void prime(int n1,int n2)
{
	int i,j;
	cout<<"Prime numbers between "<<n1<<" and "<<n2<<" are:"<<endl;
	for(i=n1;i<=n2;i++)
	{
		int t=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			t+=1;
		}
		if(t==2)
		cout<<i<<"\t";
	}
}
int main()
{
	int n1,n2;
	cout<<"Enter value of n1 and n2:";
	cin>>n1>>n2;
	prime(n1,n2);
} 
