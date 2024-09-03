//15.	Write a program in C++ to read two matrices of size m*n from the keyboard and then find sum and product of these two matrices. Use function to read, to find sum and to find product.
#include<iostream>
using namespace std;
int m1,n1,m2,n2,a[10][10],b[10][10],sum[10][10]={0},product[10][10]={0},i,j,k; 
void read(int x[][10],int r,int c)
{
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			cin>>x[i][j];
}
void su()
{
	for(i=0;i<m1;i++)
		for(j=0;j<n1;j++)
			sum[i][j]=a[i][j]+b[i][j];
}
void prod()
{
	if(n1!=m2)
	{
		cout<<"Matrix multiplication is undefined.";
	}
	else{
	for(i=0;i<m1;i++)
		for(j=0;j<n2;j++)
			for(k=0;k<n1;k++)
				product[i][j]+=a[i][k]*b[k][j];
}
}
void show(int x[][10],int r,int c)
{
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			cout<<x[i][j]<<" ";
		cout<<endl;
	}
}
int main()
{
	cout<<"Enter dimension of 1st matrix:";
	cin>>m1>>n1;
	cout<<"Enter dimension of 2nd matrix:";
	cin>>m2>>n2;
	cout<<"Enter elements of 1st matrix:"<<endl;
	read(a,m1,n1);
	cout<<"Enter elements of 2nd matrix:"<<endl;
	read(b,m2,n2);
    cout<<"Sum of matrix:"<<endl;
    su();
    show(sum,m1,n1);
    cout<<"Product of matrix:"<<endl;
    prod();
    show(product,m1,n2);
}
