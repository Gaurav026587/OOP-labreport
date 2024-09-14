
//Write a C++ program that copies content of one file to another file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin;
	ofstream fout;
	string str;
	fin.open("D:\\GauravThapa\\2ndSEMESTER\\OOP\\Lab work\\hi.txt");
	fout.open("D:\\GauravThapa\\2ndSEMESTER\\OOP\\Lab work\\hello.txt");
	while(getline(fin,str))
		fout<<str;
	fout.close();
	fin.close();
	cout<<"Data Written.";
}

