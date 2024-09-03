#include<iostream>
using namespace std;
class Box{
	private:
		double width,height,depth;
		
	public:
		Box(double w,double h,double d)
		{
			width=w;
			height=h;
			depth=d;
		}
		Box()
		{
			width=height=depth=0;
		}
		double getarea() 
		{
			return 2*(width*height+height*depth+depth*width);
		}
		double getvolume()
		{
			return width*height*depth;
		}
};
int main()
{
	Box b(3.4,6,9);
	cout<<"Area:"<<b.getarea()<<endl;
	cout<<"Volume:"<<b.getvolume();
}
