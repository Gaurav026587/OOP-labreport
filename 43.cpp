#include <iostream>
using namespace std;
class Time {
private:
    int hr;
    int min;
    int sec;

public:
    Time(int h = 0, int m = 0, int s = 0) : hr(h), min(m), sec(s) {}
    void displayTime()  
	{
        cout << hr << "h:" << min << "m:" << sec << "s" << endl;
    }
    Time operator+( Time t)  {
        Time temp;
        temp.sec = sec + t.sec;
        temp.min = min + t.min + temp.sec / 60;
        temp.sec %= 60;
        temp.hr = hr + t.hr + temp.min / 60;
        temp.min %= 60;
        return temp;
    }
};

int main() {
    Time t1(2, 45, 50);
    Time t2(1, 20, 40);
    Time t3 = t1 + t2; 
    cout << "Time 1: ";
    t1.displayTime();
    cout << "Time 2: ";
    t2.displayTime();
    cout << "Sum of Time 1 and Time 2: ";
    t3.displayTime();
    return 0;
}
