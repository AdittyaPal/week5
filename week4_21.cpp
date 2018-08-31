#include <iostream>
using namespace std;
int main()
{
	int noOfUnits=0;
	cout<<"Enter the number of units consumend."<<endl;
	cin>>noOfUnits;
	float bill=0.0;
	if(noOfUnits<=50)
		bill=0.5*noOfUnits;
	else if(noOfUnits>50&&noOfUnits<=150)
		bill=0.5*50+0.75*(noOfUnits-50);
	else if(noOfUnits>150&&noOfUnits<=250)
		bill=0.5*50+0.75*100+1.f*(noOfUnits-150);
	else
		bill=0.5*50+0.75*100+1.2*100+1.5*(noOfUnits-250);
	bill+=(0.2*bill);
	cout<<"The total electricity bill is Rs "<<bill;
	return 0;
}
	
