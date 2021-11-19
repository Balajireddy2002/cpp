//multi path inheritance
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
	
class C:public A
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
class D:public B,C
{
	public:
		D()
		{
			cout<<"constuctor of class D invoked"<<endl;
		}
		~D()
		{
			cout<<"destuctor of class D invoked"<<endl;
			
		}
};
int main()
{
	D d;
}
//OUTPUT
/*constuctor of class A invoked
constuctor of class B invoked
constuctor of class C invoked
constuctor of class D invoked
destuctor of class D invoked
destuctor of class C invoked
destuctor of class B invoked
destuctor of class A invoked*/
