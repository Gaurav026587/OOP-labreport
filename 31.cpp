#include<iostream>
using namespace std;
class lecture{
	protected:
		int id;
		string name;
	public:
		void read()
		{
			cout<<"Enter id and name of lecture:";
			cin>>id>>name;
		}
		void print()
		{
			cout<<"ID:"<<id<<endl<<"Name:"<<name<<endl;
	
		}
};
class parttime:public lecture{
	private:
		float payperhr;
	public:
		void read()
		{
			lecture::read();
			cout<<"Enter pay per hour:";
			cin>>payperhr;
		}
		void print()
		{
			lecture::print();
			cout<<"Pay per hour:"<<payperhr<<endl;
		}
};
class fulltime:public lecture{
	private:
		float paypermonth;
	public:
		void read()
		{
			lecture::read();
			cout<<"Enter pay per month:";
			cin>>paypermonth;
		}
		void print()
		{
			lecture::print();
			cout<<"Pay per month:"<<paypermonth<<endl;
		}
		
};
int main()
{
	parttime a;
	fulltime b;
	a.read();
	a.print();
	b.read();
	b.print();
	return 0;
}
