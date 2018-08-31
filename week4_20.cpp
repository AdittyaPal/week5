#include <iostream>
using namespace std;
int main()
{
	float basic=0.0f;
	cout<<"Enter the basic salary of the employee."<<endl;
	cin>>basic;
	float total=0.0f;
	if(basic<=10000)
	total=basic+(0.2f*basic+0.8f*basic);
	else if(basic>10000&&basic<=20000)
	total=basic+(0.25f*basic+0.9f+basic);
	else
	total=basic+(0.3f*basic+0.95f*basic);
	cout<<"The total salary of the employee is Rs "<<total<<endl;
	return 0;
}
