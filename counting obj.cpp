// counting no of objects created
#include<iostream>
using namespace std;
int count=0;
class sample
{
	public:
		sample()
		{
			count++;
		}
	
};
int main()
{
	sample s1,s2,s3,s4,s5,s6,s7;
	cout<<count<<" objects were created";
	return 0;
}
