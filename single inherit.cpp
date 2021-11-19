//SINGLE inheritance
#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"constuctor of class A invoked"<<endl;
		}
		~A()
		{
			cout<<"destuctor of class A invoked"<<endl;
			
		}
};
class B:public A
{
	public:
		B()
		{
			cout<<"constuctor of class B invoked"<<endl;
		}
		~B()
		{
			cout<<"destuctor of class B invoked"<<endl;
			
		}
};

int main()
{
	B b;
}
//OUTPUT
/*constuctor of class A invoked
constuctor of class B invoked
destuctor of class B invoked
destuctor of class A invoked*/
