#include<iostream>
using namespace std;
int main()
{
	double V,P,n,R=8.314;
	cout<<"enter the volume of the gas in m*3: ";
	cin>>V;
	cout<<"enter the PRESSURE of the gas in pa: ";
	cin>>P;
	n=P*V/R;
	cout<<"the no. of moles of gas is "<<n<<"mol";
	return 0;
	
	
}
