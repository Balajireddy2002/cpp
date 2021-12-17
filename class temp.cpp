#include<iostream>
using namespace std;
template <class t>
class sample
{
	t x,y;
	public:
		void getdata()
		{
			cout<<"enter x and y value";
			cin>>x>>y;
		}
		void showdata()
		{
			cout<<"x= "<<x<<endl;
			cout<<"y= "<<y<<endl;
		}
};
int main()
{
	sample <int>s1;
	s1.getdata();
	s1.showdata();
	sample <char>s2;
	s2.getdata();
	s2.showdata();
}
