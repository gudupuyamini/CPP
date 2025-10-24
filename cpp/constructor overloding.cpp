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
				rectangle(float l,float b )
			{
				x=l;
				y=b;
			}
			void area()
			{
				cout<<"area of rectangle="<<x*y<<endl;
			}			
};
int main()
{
	rectangle e1;
	rectangle e1(4,5);
	rectangle e1(3.2f,4.2f);
	e1.area();
	e1.area();
	e1.area();
	return 0;
}
