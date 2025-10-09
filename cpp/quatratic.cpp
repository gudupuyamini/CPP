#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c,r;
	double d,r1,r2;
	cout<<"enter a,b,c";
	cin>>a>>b>>c;
	d=b*b-(4*a*c);
	if(d==0)
	{
		cout<<"roots are real and equal"<<endl;
		r1=r2=-b/(2*a);
		cout<<"r1="<<r1<<endl<<"r2="<<r2;
	}
	else if(d>0)
	{
		cout<<"roots are real and different"<<endl;
		r1=-b+sqrt(d)/(2*a);
		r2=-b-sqrt(d)/(2*a);
		cout<<"r1="<<r1<<endl<<"r2="<<r2;
	}
	else
	{
		cout<<"roots are imaginary"<<endl;
		r1=-b+sqrt(d)/(2*a);
		r2=-b-sqrt(d)/(2*a);
		cout<<"r1="<<r1<<endl<<"r2="<<r2;
	}

	return 0;
}
