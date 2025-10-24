#include<iostream>
using namespace std;
template<typename t1,typename t2>
void add(t1 x,t2 y)
{
	cout<<"addition of different data="<<x+y<<endl;

}
int main ()
{
	add (10,20.56f);
	add(20.6f,30.4);
	add(45,87.2);
}
