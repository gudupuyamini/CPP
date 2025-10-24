//Abstract class
#include<iostream>
using namespace std;
class shapes
{
	public:
		virtual void area()=0;
};
class  Rectangle: public shapes
{
	public:
		int l,b;
		Rectangle()
		{
			cout<<"Enter l,b values:";
			cin>>l>>b;
		}
		void area()
		{
			cout<<"Area of Rectangle="<<l*b<<endl;
		}
};
class  Square: public shapes
{
	public:
		int s;
		Square()
		{
			cout<<"Enter s value:";
			cin>>s;
		}
		void area()
		{
			cout<<"Area of Square="<<s*s<<endl;
		}
};
class  Triangle: public shapes
{
	public:
		int b,h;
	    Triangle()
		{
			cout<<"Enter b,h values:";
			cin>>b>>h;
		}
		void area()
		{
			cout<<"Area of Triangle="<<(float)1/2*(b*h)<<endl;
		}
};
class  Circle: public shapes
{
	public:
		int r;
	    Circle()
		{
			cout<<"Enter r value:";
			cin>>r;
		}
		void area()
		{
			cout<<"Area of  Circle="<<3.14*r*r<<endl;
		}
};
int main()
{
	shapes *sptr;
	Rectangle r;
	sptr=&r;
	sptr->area();
	Square s;
	sptr=&s;
	sptr->area();
    Triangle t  ;
	sptr=&t;
	sptr->area();
	Circle c;
	sptr=&c;
	sptr->area();
}
 

