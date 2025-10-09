#include<iostream>
using namespace std;
class rectangle
{
	private:
		int len,bre;
		public:
			void get();
			void area();
};
void rectangle::get()
{
	len=89;
	bre=78;
}
void rectangle::area()
{
	cout<<"area="<<len*bre<<endl;
}
int main()
{
	rectangle r;
	r.get();
	r.area();
	return 0;
}
