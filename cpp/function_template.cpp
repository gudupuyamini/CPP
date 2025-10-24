#include<iostream>
using namespace std;
template<typename t>
void add(t x,t y)
{
	cout<<x+y<<endl;

}
int main ()
{
	add (10,20);
	add(20.6,30.4);
	add(3.5f,6.8f);
}
