#include <iostream>
using namespace std;
int main()
{
	int code=97;
	cout<<"The letters of the alphabet:";
	while(code<=122)
	cout<<((char)code++)<<", ";
	cout<<endl;
	return 0;
}
