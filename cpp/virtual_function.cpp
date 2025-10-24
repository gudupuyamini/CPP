#include<iostream>
using namespace std;
class Base
{
	public:
		virtual void print()
		{
			cout<<"print()of base class"<<endl;
		}
};
class derived:public Base
{
	public:
		void print()
		{
			cout<<"print() of derived class"<<endl;
		}
};
int main()
{
	base b,*bptr;
	derived d;
	bptr=&b;
	bptr->print();
	bptr=&d;
	bptr->print();
	
}
