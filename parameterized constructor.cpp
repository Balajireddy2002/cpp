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
		void show()
		{
			cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;	
		}	
};
int main()
{
	construct c(10,20);
	c.show();
	return 0;
	
}
