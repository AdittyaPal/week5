#include <iostream>
using namespace std;
int main()
{
	float cp,sp=0.0f;
	cout<<"Enter the cost price of the product."<<endl;
	cin>>cp;
	cout<<"Enter the selling price of the product."<<endl;
	cin>>sp;
	if(cp<sp)
	cout<<"The profit is Rs "<<(sp-cp);
	else if(sp<cp)
	cout<<"The loss is Rs "<<(cp-sp);
	else
	cout<<"There was neither a profit nor a loss."<<endl;
	return 0;
}
