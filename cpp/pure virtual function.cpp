//pure virtual function
#include<iostream>
using namespace std;
class base
{
	public:
		virtual void print()=0;		
};
class derived : public base
{
	public:
		void print()
		{
			cout<<"example of pure virtual function"<<endl;
		}
};
int main ()
{
	base *bptr;
	derived d;
	bptr=&d;
	bptr->print();
}

