//8.	Write a C++ program that read that finds cube of a number using inline function
#include<iostream>
using namespace std;
inline double cube(float n)
{
	return n*n*n;
}
int main()
{
    cout<<"Cube of 2:"<<cube(2)<<endl;
    cout<<"Cube of 6:"<<cube(6)<<endl;
    cout<<"Cube of 9:"<<cube(9)<<endl;
    cout<<"Cube of 30.5:"<<cube(30.5)<<endl;
    cout<<"Cube of 100:"<<cube(100)<<endl;
}
