#include<iostream>
using namespace std;
class Distance{
	private:
		double meter,cm;
	public:
		Distance()
		{
			meter=cm=0;
		}
	Distance(double m,double c)
	{
		meter=m;
		cm=c;
	}
	void display()
	{
		cout<<meter<<" meter "<<cm<<" cm "<<endl;;
	}
	
	Distance compare(Distance d2)
	{
		double tot1,tot2;
		tot1=meter*100+cm;
		tot2=d2.meter*100+d2.cm;
		if(tot1>tot2)
		return *this;
		else 
		return d2;
	}
};
int main()
{
	Distance d1(5.4,3),d2(5.4,7);
	d1.display();
	d2.display();
    Distance d3;
    d3=d1.compare(d2);
    cout<<"Largest distance:";
    d3.display();
	
}
