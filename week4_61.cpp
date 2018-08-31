#include<iostream>
using namespace std;
int main()
{
	long binary =0L;
	int deci=0;
	cout<<"Enter a binary number."<<endl;
	cin>>binary;
	long bin=binary;
	int pow=1;
	bool flag=true;
	int digit=0;
	while(bin!=0)
	{
		digit=bin%10;
		if(digit!=1&&digit!=0)
		{
			flag=false;
			break;
		}
		else
		{
			deci+=((bin%10)*pow);
			pow*=2;
			bin/=10;
		}
	}
	if(flag==true)
	cout<<"The decimal equivalent of "<<binary<<" is "<<deci<<endl;
	else
	cout<<"The binary number entered "<<binary<<" is invalid."<<endl;
	return 0;
}


