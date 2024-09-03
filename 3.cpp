#include<iostream>
using namespace std;
#define pie 3.14
int area(int r)
{
	return pie*r*r;
}
int peri(int r)
{
	return 2*pie*r;
}
int main()
{
	int r;
	cout<<"Enter radius:";
	cin>>r;
	cout<<"Area="<<area(r)<<endl;
	cout<<"Perimeter="<<peri(r);
}
