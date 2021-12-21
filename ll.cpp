#include<iostream>
using namespace std;
#include "node.h"
template <class T>
class linked
{
	public:
		node<T> *start;
		linked()
		{
			start=NULL;
		}
		void insertlas()
		{
			T ele;
			node<T> *newnode=new node<T>;
			node<T> *ptr=new node<T>;
			cout<<"enter data"<<endl;
			cin>>ele;
			newnode->data=ele;
			newnode->next=NULL;
			if(start==NULL)
			{
				start=newnode;
			}
			else
			{
				ptr=start;
				while(ptr->next!=NULL)
				{
					ptr=ptr->next;
				}
				ptr->next=newnode;
			}	
		}
		void insertbeg()
		{
			T ele;
			node<T> *newnode=new node<T>;
			node<T> *ptr=new node<T>;
			cout<<"enter data"<<endl;
			cin>>ele;
			newnode->data=ele;
			newnode->next=NULL;
			if(start==NULL)
			{
				start=newnode;
			}
			else
			{
				newnode->next=start;
				start=newnode;
			}	
		}
		void delas()
		{
			node<T> *ptr=new node<T>;
			node<T> *preptr=new node<T>;
			ptr=start;
			if(start==NULL)
			
			{
				cout<<"under flow"<<endl;
			
			}
			else
			{
				while(ptr->next!=NULL)
				{
					preptr=ptr;
					ptr=ptr->next;
				}
				preptr->next=NULL;
				cout<<ptr->data<<"deleted"<<endl;
				delete ptr;
			}
	   }
		void delbeg()
		{
			node<T> *ptr=new node<T>;
			ptr=start;
			if(start==NULL)
			
			{
				cout<<"under flow"<<endl;
			
			}
			else
			{
					start=start->next;
				
			}
			cout<<ptr->data<<"deleted"<<endl;
			delete ptr;
		}
		void display()
		{
			node<T> *ptr=new node<T>;
			ptr=start;
			cout<<"the elements in linked list are"<<endl;
			while(ptr!=NULL)
			{
				cout<<ptr->data<<"   ";
				ptr=ptr->next;
			}
			cout<<endl;
		}
};
int main()
{
	int opn;
	linked <int>l1;
	do
	{
		cout<<"enter 1 -> insert last"<<endl<<"2 -> insert start"<<endl<<"3 -> delete ending"<<endl<<"4 -> delete begining"<<endl<<"5 -> display"<<endl<<"5 -> exit"<<endl;
		cin>>opn;
		switch(opn)
		{
			case 1: l1.insertlas();
			        break;
			case 2: l1.insertbeg();
			        break;
			case 3: l1.delas();
			        break;
			case 4: l1.delbeg();
			        break;
			case 5:l1.display();
			       break;
		}
	}while(opn!=6);
	return 0;
}
