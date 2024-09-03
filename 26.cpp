#include<iostream>
using namespace std;
class USMoney{
	private:
		int dollars,cents;
	public:
		USMoney()
		{
			dollars=cents=0;
		}
		USMoney(int d,int c)
		{
			dollars=d;
			cents=c;
		}
		
		USMoney plus(USMoney c)
		{
			USMoney temp;
			temp.dollars=dollars+c.dollars;
			temp.cents=cents+c.cents;
			
			if(temp.cents>=100)
			{
				temp.dollars+=temp.cents/100;
				temp.cents%=100;
			}
			return temp;
		}
		void display()
		{
			cout<<dollars<<" dollars "<<cents<<" cents";
		}
};
int main()
{
	USMoney x(5,80),y(1,90);
	USMoney z=x.plus(y);
	z.display();
	
}
