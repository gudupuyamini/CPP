#include<iostream>
using namespace std;
class triangle
{
	private:
		int x,y;
		public:
			triangle()
			{
				x=9;
				y=4;
			}
			void area()
			{
				cout<<"area of triangle="<<0.5*x*y;
			}
};
int main()
{
	triangle t;
	t.area();
	return 0;
}
