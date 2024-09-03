#include<iostream>
using namespace std;
double f=0,i=0;
class Distance{
	private:
		double foot,inch;
	public:
		void read()
		{
			cout<<"Enter foot and inch:";
			cin>>foot>>inch;
		}
		double sum()
		{
			f+=foot;
			i+=inch;
	    }
		
};
int main()
{
	Distance d[100];
	int i,n;
	cout<<"Enter no. of distance:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		d[i].read();
	
    	d[i].sum();
	}
	cout<<"Average:";
	cout<<f/n<<" ft "<<i/n<<" inch";
}
