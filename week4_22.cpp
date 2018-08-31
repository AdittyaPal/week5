#include <iostream>
using namespace std;
int main()
{
	int limit=0;
	int n=1;
	cout<<"Enter the limit to which to be printed."<<endl;
	cin>>limit;
	cout<<"The natural numbers between 1 and "<<limit<<" are:";
	while(n<=limit)
	{
		cout<<n<<", ";
		n++;
	}
	cout<<endl;
	return 0;
}
