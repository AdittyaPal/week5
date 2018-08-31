#include<iostream>
using namespace std;
int main()
{
	int decimal;
	long binary=0;
	cout<<"Enter a decimal number."<<endl;
	cin>>decimal;
	int pow=1;
	int deci=decimal;
	while(deci!=0)
	{
		binary=binary+((deci%2)*pow);
		pow*=10;
		deci/=2;
		cout<<binary<<" "<<deci<<endl;
	}
	cout<<1%2<<endl;
	cout<<"The binary equivalent of "<<decimal<<" is "<<binary<<endl;
	return 0;
}

