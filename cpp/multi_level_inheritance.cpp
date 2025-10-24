//multi-level inheritance:
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
class percentage : public marks
{
	public:
		float per;
		void showp()
		{
			getm();
			per=(m1+m2+m3+m4+m5)/5;
			showst();
			cout<<"percentage="<<per<<endl;
		}
};
int main()
{
	percentage p;
	p.showp();
}
