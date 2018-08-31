#include <iostream>
using namespace std;
int main()
{
	int decimal=0;
	int octal=0;
	cout<<"Enter a decimal number."<<endl;
	cin>>decimal;
	int dec=decimal;
	int pow=1;
	while(dec!=0)
	{
		octal+=((dec%8)*pow);
		dec/=8;
		pow*=10;
	}
	cout<<"The octal equivalent of "<<decimal<<" is "<<octal<<endl;
	return 0;
}
