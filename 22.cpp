#include<iostream>
using namespace std;
class student{
	private:  
	int roll,marks;
	char name[30];
	public:
		void read()
		{
			cout<<"Enter roll, name and marks:";
			cin>>roll>>name>>marks;
		}
		
		void display()
		{
			cout<<roll<<"\t"<<name<<"\t"<<marks<<endl;
		}
};
int main()
{
	student s[3];
	int i;
	for(i=0;i<3;i++)
	{
		s[i].read();
	}
	cout<<"Roll\tName\tMarks"<<endl;
	for(i=0;i<3;i++)
	{
		s[i].display();
	}
}
