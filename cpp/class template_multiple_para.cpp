//class template using multiple parameters
#include<iostream>
using namespace std;
template<class t1,class t2>
class sample
{
	t1 a;
	t2 b;
	public:
		void getdata()
		{
			cout<<"enter a and b:"<<endl;
			cin>>a>>b;
		}
		void dispaly()
		{
			cout<<"Displaying values"<<endl;
			cout<<"a="<<a<<endl;
			cout<<"b="<<b;
		}
};
		int main()
		{
			sample<int,int>s1;
			sample<int,char>s2;
			sample<int,float>s3;
			cout<<"Two integer data"<<endl;
			s1.getdata();
			s1.getdata();
			cout<<"integer and character data"<<endl;
			s2.getdata();
			s2.getdata();
			cout<<"integer and float data"<<endl;
			s3.getdata();
			s3.getdata();
			return 0;
			
		}

