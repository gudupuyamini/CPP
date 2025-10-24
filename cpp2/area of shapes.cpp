#include<iostream>
using namespace std;
class shape
{
	public:
		void area(int x,int y)
		{
			cout<<"area of rectangle="<<x*y<<endl;
		}
		void area(int x)
		{
			cout<<"area of square="<<x*x<<endl;
		}
		void area(int x,float y)
		{
			cout<<"area of triangle="<<0.5*x*y<<endl;
		}
		void area(float x)
		{
			cout<<"area of circle="<<3.14*x*x<<endl;
		}
};
int main()
{
	shape s;
	s.area(5,6);
	s.area(8);
	s.area(9,8.9f);
	s.area(3.2f);
	return 0;
}

