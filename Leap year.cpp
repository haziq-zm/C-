#include<iostream>
using namespace std;

int main()
{
	int year;
	cout<<"Enter any year: ";
	cin>>year;
	cout<<endl<<endl;
	if (year%4==0)
		cout<<"It is a leap year";
	else
		cout<<"It is not a leap year";
}
