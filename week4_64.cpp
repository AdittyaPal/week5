#include<iostream>
using namespace std;
int main()
{
	int octal=0;
	int decimal=0;
	cout<<"Enter a number in the octal system."<<endl;
	cin>>octal;
	int oct=octal;
	int pow=1;
	bool flag=true;
	while(oct!=0)
	{
		if(oct%10==8||oct%10==9)
		{
			flag=false;
			break;
		}
		else
		{
			decimal+=(oct%10*pow);
			oct/=10;
			pow*=8;
		}
	}
	if(flag==true)
	cout<<"The decimal equivalent of "<<octal<<" is "<<decimal<<endl;
	else
	cout<<"The octal number inputted was invalid."<<endl;
	return 0;
}
		
