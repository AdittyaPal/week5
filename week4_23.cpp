#include <iostream>
using namespace std;
int main()
{
	int limit=0;
	cout<<"Enter the limit from which to be printed."<<endl;
	cin>>limit;
	cout<<"the natural numbers between "<<limit<<" and 1 are:";
	while(limit>0)
	cout<<limit--<<", ";
	cout<<endl;
	return 0;
}
