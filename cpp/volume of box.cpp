#include<iostream>
using namespace std;
class box
{
	private:
		int length,breadth,height;
		public:
			void get()
			{
				length=20;
				breadth=12;
				height=3;
			}
			void volume()
			{
				cout<<"volume of the box="<<length*breadth*height;
			}
};
int main()
{
	box b;
	b.get();
	b.volume();
	return 0;
}
