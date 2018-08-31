#include <iostream>
using namespace std;
int main()
{
	int num=0;
	cout<<"Enter the number whose table is to be printed."<<endl;
	cin>>num;	
	cout<<"the multiplication table of "<<num<<" is"<<endl;
	for(int i=1;i<=10;i++)
	cout<<num<<"x"<<i<<"="<<(num*i)<<endl;
	return 0;
}
