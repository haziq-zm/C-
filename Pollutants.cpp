#include<iostream>
using namespace std;
int main()
{
	int pol, epm1, epm2, od;
	cout<<"Select the pollutant: \n\n";
	cout<<"  (1) Carbon monoxide\n  (2) Hydrocarbons\n  (3) Nitrogen Oxides\n  (4) Nonmethane Hydrocarbons\n\nEnter here: ";
	cin>>pol;
	
	cout<<"\n\nEnter number of grams emitted per mile for first 50000 miles: ";
	cin>>epm1;
	
	cout<<"\nEnter number of grams emitted per mile after 50000 miles: ";
	cin>>epm2;
	cout<<endl;
	
	cout<<"Enter the odometer reading: ";
	cin>>od;
	cout<<endl;
	switch (pol)
	{
		case 1:
			if (od<50000)
				cout<<"Total Carbon monoxide emissions: "<<epm1*od;
			else
				cout<<"Total Carbon monoxide emissions: "<<(epm1*50000)+(epm2*(od-50000));
				break;
		case 2:
			if (od<50000)
				cout<<"Total Hydrocarbon emissions: "<<epm1*od;
			else
				cout<<"Total Hydrocarbon emissions: "<<(epm1*50000)+(epm2*(od-50000));
				break;
		case 3:
			if (od<50000)
				cout<<"Total Nitrogen Oxides emissions: "<<epm1*od;
			else
				cout<<"Total Nitrogen Oxides emissions: "<<(epm1*50000)+(epm2*(od-50000));
				break;
		case 4:
			if (od<50000)
				cout<<"Total Nonmethane Hydrocarbons emissions: "<<epm1*od;
			else
				cout<<"Total Nonmethane Hydrocarbons emissions: "<<(epm1*50000)+(epm2*(od-50000));
				break;
		default:
			cout<<"Error";
			
	}
}
