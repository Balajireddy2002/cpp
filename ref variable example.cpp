//reference variable
#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int &x=a;
	cout<<"x= "<<x<<endl;
	a=a*10;
	cout<<"modifying 'a' value it reflects on 'x' value and vive versa.."<<endl;
	cout<<"after modification"<<endl<<"x= ";
	cout<<x;
	return 0;
}
