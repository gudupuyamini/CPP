#include<iostream>
using namespace std;
class sum
{
		public:
			void add(int x,int y)
			{
				cout<<"integer addition="<<x+y<<endl;
			}
				void add(float x,float y)
			{
				cout<<"float addition="<<x+y<<endl;
			}
				void add(double x,double y)
			{
				cout<<"double addition="<<x+y<<endl;
			}
				void add(int x,float y)
			{
				cout<<"mixed addition="<<x+y<<endl;
			}
};
int main()
{
	sum s;
	s.add(78,56);
	s.add(7.28f,5.66f);
	s.add(7.6,78.3);
	s.add(35,5.66f);
	return 0;
}
