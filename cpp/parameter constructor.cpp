#include<iostream>
using namespace std;
class rectangle
{
	private:
		int x,y;
		public:
			rectangle(int l,int b)
			{
				x=l;
				y=b;
			}
			void area()
			{
				cout<<"area of rectangle="<<x*y;
			}
};
int main()
{
	rectangle t(32,67);
	t.area();
	return 0;
}
