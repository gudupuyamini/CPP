//bubble sort using function template
#include<iostream>
using namespace std;
template<typename T>
void sorting(T a[],int n)
{
	T temp;
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
    template<typename T>
	void print(T a[],int n)
	{
		int i,j;
		for(i=0;i<n;i++)
		{
			cout<<a[i]<<endl;
		}
	}

int main()
{
	int a[5]={12,8,67,9,10};
	char c[5]={'a','g','y','r','w'};
	float f[5]={2.5,56.4,35.7,3.5,45.1};
	sorting(a,5);
	print(a,5);
	sorting(c,5);
	print(c,5);
	sorting(f,5);
	print(f,5);
}
