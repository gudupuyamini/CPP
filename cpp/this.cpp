//using keyword "THIS"
#include<iostream>
using namespace std;
class rectangle
{
	private:
		int l,b;
		public:
			void input(int l,int b)
			{
				this->l=l;
				this->b=b;
			}
			void area()
			{
				cout<<"area of rectangle= "<<l*b;
			}
};
int main()
{
	rectangle r;
	r.input(12,54);
	r.area();
}
