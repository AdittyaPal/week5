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
		n+=2;
	}
	cout<<"The sum of odd numbers between 1 and "<<limit<<" is "<<sum<<endl;
	return 0;
}
