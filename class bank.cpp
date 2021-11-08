#include<iostream>
using namespace std;
class bank
{
	private:
		string name;
		int acno;
		long int mobno;//only 8
		string branch;
		float depo;
		float withd;
		static float balance; 
	public:
		void create();
		void deposit();
		void withdrawl();
		void enquiry();
};
float bank::balance=0;
void bank::create()
{
	cout<<"WELCOME TO SBI"<<endl;
	cout<<"please enter the follwing fields"<<endl;
	cout<<"name:";
	cin>>name;
	cout<<"mobile no";
	cin>>mobno;
	cout<<"your account no is __***__"<<endl;
	cout<<"ACCOUNT CREATED"<<endl;
	float balance=0;
}
void bank::deposit()
{
	cout<<"enter amount to deposit  ";
	cin>>depo;
	balance=balance+depo;
}
void bank::withdrawl()

{
	cout<<"enter amout for withdrawl ";
	cin>>withd;
	if(withd>balance || withd>50000)
	{
		cout<<"insufficient funds";
	}
	else
	{
		balance=balance-withd;
	 } 
}
void bank::enquiry()
{
	cout<<"CLOSING BALANCE IS Rs: "<<balance<<"only"<<endl;
	cout<<"THANK YOU";
}
int main()
{
	bank b;
	int op;
	
	cout<<"1. create"<<"\n"<<"2. deposit"<<"\n"<<"3. withdrawl"<<"\n"<<"4. enqury"<<"\n"<<"5. exit"<<endl;
	do
	{
		cout<<endl<<"enter your option"<<endl;
		cin>>op;
		
		
	    switch(op)
	    {
	    	case 1:b.create();
	    	       break;
	    	case 2:b.deposit();
	    	       break;
	    	case 3:b.withdrawl();
	    	       break;
	    	case 4:b.enquiry();
		}
	}while(op!=5);
	    	
	return 0;
}

