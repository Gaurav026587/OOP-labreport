//16.	Write a function called zeroSmaller () that is passed two int arguments by reference and then sets the smaller of two numbers to 0. Write a main () program to exercise this function
#include<iostream>
using namespace std;
void zeroSmaller(int *a,int *b)
{
	if(*a<*b)
	*a=0;
	else
	*b=0;
}
int main()
{
	int a,b;
	cout<<"Enter a and b:";
	cin>>a>>b;
	zeroSmaller(&a,&b);
	cout<<"Smallest number is zero:"<<a<<" "<<b;
}
