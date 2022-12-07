#include<iostream>
using namespace std;

int main()
{
	int n, i, temp, rev=0, rem;
	cout<<"Enter a number: ";
	cin>>n;
	cout<<endl;
	temp = n;
	while(temp>0)
	{
		rem = temp%10;
		rev = rev*10+rem;
		temp = temp/10;
	}
	cout<<"The reversed number is: "<<rev<<endl<<endl;
	if (rev == n)
		cout<<"The reversed number is equal to the original number";
	else
		cout<<"The reversed number is not equal to the original number";
}
