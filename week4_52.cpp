#include <iostream>
using namespace std;
int main()
{
	int limit=0;
	cout<<"Enter the limit of the series."<<endl;
	cin>>limit;
	cout<<"The perfect numbers between 1 and "<<limit<<" are: ";
	for(int i=1;i<=limit;i++)
	{
		int sumOfFactors=0;
		for(int j=1;j<=i/2;j++)
		{
			if(i%j==0)
			sumOfFactors+=j;
		}
		if(i==sumOfFactors)
		cout<<i<<", ";
		sumOfFactors=0;
	}
	cout<<endl;
	return 0;
}
	
