//single inheritance
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
			cout<<"enter name,age,gender";
			cin>>name>>age>>gender;
		}
		void showp()
		{
			cout<<"name="<<name<<endl;
			cout<<"age="<<age<<endl;
			cout<<"gender="<<gender<<endl;
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
			void display()
			{
				showp();
				cout<<"pinno="<<pinno<<endl;
				cout<<"percentage="<<per<<endl;
			}
};
int main()
{
	student s;
	s.gets();
	s.display();
}
