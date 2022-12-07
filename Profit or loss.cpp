#include<iostream>
using namespace std;

int main()
{
	float c, p;
	cout<<"Enter the cost of the item: ";
	cin>>c;
	cout<<endl<<"Enter the price of the item: ";
	cin>>p;
	cout<<endl<<endl;
	if (p>c)
		cout<<"The seller has made a profit of "<<p-c;
	else
		cout<<"The seller has made a loss of "<<c-p;
}
