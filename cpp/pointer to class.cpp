//pointer to class
#include<iostream>
using namespace std;
class Base
{
	public:
		void print()
		{
			cout<<"print() of Base class"<<endl;
		}
};
class derived :public Base
{
	public:
		void show(){
			cout<<"show() of derived class "<<endl;
		}
};
int main()
{
	derived d;
	derived *dptr;
	dptr=&d;
	dptr->show();
	dptr->print();
}


