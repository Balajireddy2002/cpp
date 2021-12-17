#include<iostream>
using namespace std;
int n;
template <class t>
class array
{
	t a[50];
	public:
		void getdata();
		void showdata();
};
template <class t>
void array<t>::getdata()
{
	cout<<"enter size of an array: ";
	cin>>n;
	cout<<"enter array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
}
template <class t>
void array<t>::showdata()
{
	cout<<"array elements are"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	
}
int main()
{
	array <int>a1;
	a1.getdata();
	a1.showdata();
	array <char>a2;
	a2.getdata();
	a2.showdata();
	
}
