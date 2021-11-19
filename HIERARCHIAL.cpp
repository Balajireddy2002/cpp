//HIERARCHIAL inheritance
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
class B
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
class C:public A,B
{
	public:
		C()
		{
			cout<<"constuctor of class C invoked"<<endl;
		}
		~C()
		{
			cout<<"destuctor of class C invoked"<<endl;
			
		}
};
int main()
{
	C c;
}
//OUTPUT
/*constuctor of class A invoked
constuctor of class B invoked
constuctor of class C invoked
destuctor of class C invoked
destuctor of class B invoked
destuctor of class A invoked*/
