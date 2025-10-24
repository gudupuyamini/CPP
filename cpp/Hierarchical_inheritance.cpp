#include<iostream>
using namespace std;
class person
{
	protected:
		char gender;
		string name;
		int age;
		void getp()
		{
			cout<<"enter name,age,gender:"<<endl;
			cin>>name>>age>>gender;
		}
		void showp()
		{
			cout<<"name= "<<name<<endl;
			cout<<"age= "<<age<<endl;
			cout<<"gender= "<<gender<<endl;
		}
};
class student:public person
{
	private:
		int pinno;
		float per;
		public:
			void gets()
			{
				getp();
				pinno=501;
				per=98.5;
			}
			void displays()
			{
				cout<<"student details are"<<endl;
				showp();
				cout<<"pinno= "<<pinno<<endl;
				cout<<"percentage= "<<per<<endl;
			}
};
class faculty:public person
{
	private:
		int empid;
		float salary;
		int exp;
		public:
			void getf()
			{
				getp();
				empid=0701;
				salary=100000;
				exp=7;
			}
			void displayf()
			{
				cout<<"faculaty details are:"<<endl;
				showp();
				cout<<"empid= "<<empid<<endl;
				cout<<"salary= "<<salary<<endl;
				cout<<"exp= "<<exp<<endl;	
			}
};
int main()
{
	student s;
	faculty f;
	s.gets();
	s.displays();
	f.getf();
	f.displayf();
	return 0;
}
