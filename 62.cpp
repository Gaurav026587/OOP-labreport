
//Write a C++ program that reads lines of text from file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin;
	string str;
	fin.open("D:\\GauravThapa\\2ndSEMESTER\\OOP\\Lab work\\hi.txt");
	while(getline(fin,str))
		cout<<str;
	fin.close();
}

