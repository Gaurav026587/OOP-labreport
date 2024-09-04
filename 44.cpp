#include<iostream>
#include<string.h>
using namespace std;
class String{
	private:
		int length;
		char *name;
	public:
		String()
		{
			length=0;
			name=new char[length+1];
		}
		String(char *n)
		{
			length=strlen(n);
			name=new char[length+1];
			strcpy(name,n);
		}
		void display()
		{
			cout<<name<<endl;
		}
		
		friend String operator +(String s1,String s2);
};

String operator +(String s1,String s2)
{
	String temp;
	temp.length=strlen(s1.name)+strlen(s2.name);
	temp.name=new char[temp.length+2];
	strcpy(temp.name,s1.name);
	strcat(temp.name," ");
	strcat(temp.name,s2.name);
	return temp;
}
int main()
{
	String s1("Gaurav");
	String s2("Thapa");
	String s3=s1+s2;
	s1.display();
	s2.display();
	s3.display();
}
