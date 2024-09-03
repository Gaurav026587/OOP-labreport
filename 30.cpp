#include <iostream>
using namespace std;
class Box {
protected:
    double length;
    double breadth;
    double height;

public:
    Box()
    {
    	length=breadth=height=0;
	}
    Box(double l, double b, double h)
	{
		length=l;
		breadth=b;
		height=h;
	}
	double getVolume()  {
    return length * breadth * height;
    }
};

class BoxWeight : public Box {
protected:
    double weight;

public:
    BoxWeight() : Box()
    {
    	weight=0;
	}
    BoxWeight(double l, double b, double h, double w) : Box(l, b, h)
    {
    	weight=w;
	}
    double getWeight()  {
        return weight;
    }
};

class Shipment : public BoxWeight {
private:
    double cost;

public:
    Shipment() : BoxWeight()
	{
		cost=0;
	}
    Shipment(double l, double b, double h, double w, double c) : BoxWeight(l, b, h, w)
	{
		cost=c;	
	}
    double getCost()  {
        return getWeight() * cost;
    }
};

int main() {
    Shipment a(5, 4, 3, 100, 2.5);  
    cout << "Volume: " << a.getVolume() << endl;
     cout << "Weight: " << a.getWeight() << endl;
    cout << "Cost of Shipping: " << a.getCost() << endl;
    return 0;
}
