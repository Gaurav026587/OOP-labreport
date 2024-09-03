#include<iostream>
using namespace std;
class employee{
	private:
		char name[30];
		long int id;
	public:
	    void getdata()
		{
			cout<<"Enter id and name of employee:";
			cin>>id>>name;
		}	
		void putdata()
		{
			cout<<"ID="<<id<<endl<<"Name="<<name<<endl;
		}
};
int main()
{
	employee e[3];
	int i;
	for(i=0;i<3;i++)
	e[i].getdata();
	
	for(i=0;i<3;i++)
	e[i].putdata();
}
