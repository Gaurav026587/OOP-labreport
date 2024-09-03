#include<iostream>
using namespace std;
class teacher{
	protected:
		int tid;
		string subject;
	public:
		void read()
		{
			cout<<"Enter tid and subject name:";
			cin>>tid>>subject;
		}
		void display()
		{
			cout<<"TID:"<<tid<<endl<<"Subject:"<<subject<<endl;
	
		}
};
class staff{
	protected:
		int sid;
		string position;
	public:
		void read()
		{
			cout<<"Enter sid and position:";
			cin>>sid>>position;
		}
		void display()
		{
			cout<<"SID:"<<sid<<endl<<"Position:"<<position<<endl;
	
		}
};
class coordinator:public teacher,public staff{
	private:
		string department;
	public:
		void read()
		{
			teacher::read();
			staff::read();
			cout<<"Enter department name:";
			cin>>department;
		}
		void display()
		{
			teacher::display();
			staff::display();
			cout<<"Department:"<<department<<endl;
	
		}
};
int main()
{
	coordinator c1,c2;
	c1.read();
	c1.display();
	cout<<endl;
	c2.read();
	c2.display();
	return 0;
}
