#include<iostream>
using namespace std;
class rectangle
{
	private:
		int x,y;
		public:
			rectangle()
			{
				x=87;
				y=67;
			}
				rectangle(int l,int b)
			{
				x=l;
				y=b;
			}
				rectangle(int z)
			{
				x=z;
				y=z;
			}
			void area()
			{
				cout<<"area of rectangle="<<x*y<<endl;
			}			
};
int main()
{
	rectangle e1;
	rectangle e2(4,5);
	rectangle e3(4);
	e1.area();
	e2.area();
	e3.area();
	return 0;
}
