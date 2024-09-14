#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("D:\\GauravThapa\\2ndSEMESTER\\OOP\\Lab work\\hi.txt");
	string str="Hi this is Gaurav. Testing 1 2 3";
	fout<<str;
	fout.close();
	cout<<"Data Written.";
}
