#include<iostream>
using namespace std;
int main()
{
	float n;
	cout<<"Enter the Richter Scale number: ";
	cin>>n;
	cout<<endl;
	if (n<5)
		cout<<"Little to no damage";
	else if (n>=5 && n<5.5)
		cout<<"Some damage";
	else if (n>=5.5 && n<6.5)
		cout<<"Serious damage, walls may crackl or fall";
	else if (n>=6.5 && n<7.5)
		cout<<"Disaster: Houses and buildings may collapse";
	else if (n>=7.5)
		cout<<"Catastrophe: Most buildings destroyed";
	else
		cout<<"Error";
}
