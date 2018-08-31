#include <cmath>
#include <iostream>
using namespace std;
int main()
{
	float a,b,c=0.0f;
	cout<<"Enter the coefficient of x^2 in the quadratic equation."<<endl;
	cin>>a;
	cout<<"Enter the coefficient of x in the quadratic equation."<<endl;
	cin>>b;
	cout<<"Enter the conatant term in the quadratic equation."<<endl;
	cin>>c;
	double disc=sqrt(b*b-4*a*c);
	if(disc>0)
	{
		double root1=(-b+disc)/(2*a);
		double root2=(-b+disc)/(2*a);
		cout<<"The roots of the equation "<<a<<"x^2+"<<b<<"x+"<<c<<"=0 are "<< root1<<" and "<<root2<<endl;
	}
	else if(disc<0)
	cout<<"The equation "<<a<<"x^2+"<<b<<"x+"<<c<<"=0 has no real roots."<<endl;
	else
	{
		double root=-b/(2*a);
		cout<<"The roots of the equation "<<a<<"x^2+"<<b<<"x+"<<c<<"=0 are "<< root<<" and "<<root<<endl;
	}
	return 0;
}
