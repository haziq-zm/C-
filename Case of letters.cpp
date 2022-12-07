#include<iostream>
#include<ctype.h>
using namespace std;

int main()
{
	char c;
	cout<<"Enter a letter: ";
	cin>>c;
	cout<<endl<<endl;
	
	int x = islower(c);
	if (x==0)
		cout<<"The letter is in uppercase";
	else
		cout<<"The letter is in lowercase";
	
}
