#include<iostream>
using namespace std;
template <class T>
void bubble_sort(T a[],int n)
{
	int i,j;
	T temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
				
			}
		}
	}
}
template <class T>
void print(T a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	int a[]={50,60,80,90};
	bubble_sort(a,4);
	print(a,4);
	cout<<endl;
	char b[]={'d','s','a','b'};
	bubble_sort(b,4);
	print(b,4);
}
