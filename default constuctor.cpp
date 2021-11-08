#include<iostream>
using namespace std;
class construct
{
	private:
		int a,b;
	public:
		construct()
		{
			a=10;
			b=20;
		}
		void show()
		{
			cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;	
		}	
};
int main()
{
	construct c;
	c.show();
	return 0;
	
}
