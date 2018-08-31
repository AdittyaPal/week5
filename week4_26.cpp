#include <iostream>
using namespace std;
int main()
{
	int num=1;
        cout<<"The odd numbers between 1 and 100 are:";
	while(num<=100)
	{
		cout<<num<<", ";
		num+=2;
	}
	cout<<endl;
	return 0;
}
