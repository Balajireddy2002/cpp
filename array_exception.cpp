#include<iostream>
using namespace std;
int main()
{
	try
	{
		int arr[5]={1,2,3,4,5};
		int index;
		cout<<"enter index: ";
		cin>>index;
		if(index>=5)
		{
			throw index;
		}
		else if(index<0)
		{
			throw "index can't be negative";
		}
		else
		{
			int ele;
			cout<<"enter element: ";
			cin>>ele;
			arr[index]=ele;
			cout<<"element is inserted at"<<index;
		}	
	}
	catch(int s)
	{
		cout<<"array index out of bounds"<<endl;
	}
	catch(const char *e)
	{
		cout<<e<<endl;
	}
    return 0;
}
