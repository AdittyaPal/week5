#include <iostream>
using namespace std;
int main()
{
	int limit=0;
	int n=1;
	cout<<"Enter the limit to which to be added."<<endl;
	cin>>limit;
	int sum=0;
	
	while(n<=limit)
	{
		sum+=n;
		n++;
	}
	cout<<"The sum of natural numbers between 1 and "<<limit<<" is "<<sum<<endl;
	return 0;
}
