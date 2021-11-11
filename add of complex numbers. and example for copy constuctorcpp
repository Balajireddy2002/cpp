//parameterized constructor
#include<iostream>
using namespace std;
class construct
{
	private:
		int a,b;
	public:
		construct(int a,int b)
		{
			(*this).a=a;
			(*this).b=b;	
		}
		void complex(construct c)
		{
			a=a+c.a;
			b=b+c.b;
		}
		void show()
		{
			cout<<"the addition of complex numbers is "<<a<<" + i "<<b;	
		}	
};
int main()
{
	int a1,a2,b1,b2;
	cout<<"enter real and imaginary patrs of 1st comples number"<<endl;
	cin>>a1>>b1;
	cout<<"enter real and imaginary patrs of 2 nd comples number"<<endl;
	cin>>a2>>b2;
	construct c(a1,b1);
	construct b(a2,b2);
	b.complex(c);
	b.show();
	return 0;
	
}
