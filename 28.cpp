#include<iostream>
using namespace std;
class Room{
	protected:
		double length,breadth;

	public:
		Room(double l,double b)
		{
			length=l;
			breadth=b;
		}
		double getarea()
		{
			return length*breadth;
		}
};
class MyRoom:public Room{
	private:
		double height;
		
	public:
		MyRoom(double l ,double b , double h):Room(l,b)
		{
		
			height=h;
		}
		double getvolume()
		{
			return getarea()*height;
		}
};
int main()
{
	MyRoom a(10.3,12,20);
	cout<<"Area of Room a:"<<a.getarea()<<endl;
	cout<<"Volume of Room a:"<<a.getvolume()<<endl;
	MyRoom b(12,9.4,11);
	cout<<"Area of Room b:"<<b.getarea()<<endl;
	cout<<"Volume of Room b:"<<b.getvolume();
}
