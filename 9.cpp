//9.	Write a program in C++ to find product of two 3*3 matrices.
#include<iostream>
using namespace std;
int main()
{
	int i,j,a[5][5],b[5][5];
	cout<<"Enter elements of 1st matrix:"<<endl;
	for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					cin>>a[i][j];
				}
			}
	cout<<"Enter elements of 2nd matrix:"<<endl;
	for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					cin>>b[i][j];
				}
			}
	cout<<"multiplication of 2 matrix:"<<endl;
    int k,temp[5][5];
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					temp[i][j]=0;
					for(k=0;k<3;k++)
					{
						temp[i][j]+=a[i][k]*b[k][j];
					}
				}
			}
			
			
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					cout<<temp[i][j]<<" ";
				}
				cout<<endl;
			}
			
	
}
