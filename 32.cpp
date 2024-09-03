#include<iostream>
using namespace std;
class student
{
	public:
		int roll;
		string name;
		student(int r,string n)
		{
			roll=r;
			name=n;
		}
		void show()
		{
			cout<<"Roll No. : "<<roll<<endl<<"Name : "<<name<<endl;
		}
};
class computer: public student
{
	private:
		double DS,OOP,IIT;
	public:
		computer(int r,string n,double s1,double s2,double s3): student(r,n)
		{
			DS=s1;
			OOP=s2;
			IIT=s3;
		}
		double getAvg()
		{
			return((DS+OOP+IIT)/3.0);
		}
		void show()
		{
			student::show();
			cout<<"DS : "<<DS<<endl<<"OOP : "<<OOP<<endl<<"IIT : "<<IIT<<endl;
			cout<<"Average = "<<getAvg()<<endl;
		}
};
class math: public student
{
	private:
		double MathI,MathII,StatI;
	public:
		math(int r,string n,double s1,double s2,double s3): student(r,n)
		{
			MathI=s1;
			MathII=s2;
			StatI=s3;
		}
		double getAvg()
		{
			return((MathI+MathII+StatI)/3.0);
		}
		void show()
		{
			student::show();
			cout<<"MATH I : "<<MathI<<endl<<"MATH II : "<<MathII<<endl<<"STAT I : "<<StatI<<endl;
			cout<<"Average = "<<getAvg()<<endl;
		}
};
int main()
{
	computer c(1,"Gaurav",55,50,34);
	cout<<"Details of Computer Science student : "<<endl;
	c.show();
	math m(45,"Thapa",78,90.53,66.69);
	cout<<endl<<"Details of Mathematics student : "<<endl;
	m.show();
	return 0;
}
