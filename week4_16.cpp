#include<iostream>
using namespace std;
int main()
{
	int side1, side2, side3;
	cout<<"Enter the three sides of the triangle."<<endl;
	cin>>side1>>side2>>side3;
	if(side1==side2&&side1==side3)
	cout<<"The triangle is equilateral."<<endl;
	else if(side1==side2||side2==side3||side1==side3)	
	cout<<"The triangle is isosceles."<<endl;
	else
	cout<<"The triangle is scalene."<<endl;
}
	
