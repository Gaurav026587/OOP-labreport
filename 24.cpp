#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class str
{
	private:
      char *name;
      int length;
      public:
             str()
             {
                     length=0;
                     name=new char[length+1];
             }
             str(char *s)
             {
                         length=strlen(s);
                         name=new char[length+1];
                         strcpy(name,s);
             }
             void display()
             {
                  cout<<name<<endl;                  
             }
             void join(str &a, str &b)
             {
                  length=a.length+b.length;
                  name=new char[length+2];
                  strcpy(name,a.name);
                  strcat(name, " ");
                  strcat(name,b.name);
             }

};
int main()
{
    str s1("Gaurav");
    str s2("Thapa");
    s1.display();
    s2.display();
    str s3;
    s3.join(s1,s2);
    s3.display();
    return 0;
}

