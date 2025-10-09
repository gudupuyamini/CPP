//Hybrid inheritance
#include<iostream>
using namespace std;
class student
{
	protected:
		string name;
		int rollno;
		void getst()
		{
			cout<<"enter name,rollno:";
			cin>>name>>rollno;
		}
		void showst()
		{
			cout<<"name="<<name<<endl;
			cout<<"rollno="<<rollno<<endl;
		}
};
class marks :public student
{
	protected:
		float m1,m2,m3,m4,m5;
		void getm()
		{
			getst();
			cout<<"enter m1,m2,m3,m4,m5 marks:";
			cin>>m1>>m2>>m3>>m4>>m5;
		}
};
class project
{
	protected:
		float ip,ep;
		void getp()
		{
			cout<<"enter internal and external project marks";
			cin>>ip>>ep;
		}
};
class percentage:public marks,public project
{
	public:
		float per;
		void showp()
		{
			getm();
			getp();
			per=(m1+m2+m3+m4+m5+ip+ep)/8;
			showst();
			cout<<"percentage="<<per<<endl;
		}
};
int main()
{
	percentage p;
	p.showp();
	return 0;
}
