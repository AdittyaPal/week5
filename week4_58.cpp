#include <iostream>
using namespace std;
int main()
{
	long binary=0l;
	long oneComp=0l;
	cout<<"Enter a binary number."<<endl;
	cin>>binary;
	long bin=binary;
	long pow=1;
	bool flag=true;
	int digit=0;
	while(bin!=0)
	{
		digit=bin%10;
		if(digit!=0&&digit!=1)
		{
			flag=false;
			break;
		}
		else
		{
			switch(digit)
			{
				case 0: oneComp+=pow;
					break;
				case 1: break;
			}			
		}
		bin/=10;
		pow*=10;
	}
	if(flag==true)
	cout<<"The one's complement of "<<binary<<" is "<<oneComp<<endl;
	else
	cout<<"the entered binary number was invalid."<<endl;
	return 0;
}
			
