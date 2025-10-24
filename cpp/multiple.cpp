#include<iostream>
using namespace std;
class area
{
	protected:
		void areaR(int len,int bre )
		{
			
			cout<<"area of rectangle="<<len*bre<<endl;
		}
		
};
class perimeter
{
	protected:
		void periR(int len,int bre)
		{
			
			cout<<"perimeter of rectangle="<<2*(len+bre)<<endl;
		}
	
};
class rectangle:public area,public perimeter
{
	public:
		 int len,bre;
		 void result()
		 {
		 	cout<<"enter len and bre";
		 cin>>len>>bre;
		  void areaR(len,bre);
		  void periR(len,bre);
		  
		 }
};
int main()
{
	rectangle r;
	r.result();
}







