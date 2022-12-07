#include<iostream>
#include<iomanip>
using namespace std;
struct employee{
	int number;
	float compensation;
};
int main(){
	employee e1,e2,e3;
	cout<<"enter employee number and compensation: ";
	cin>>e1.number>>e1.compensation;
	cout<<"enter employee number and compensation: ";
	cin>>e2.number>>e2.compensation;
	cout<<"enter employee number and compensation: ";
	cin>>e3.number>>e3.compensation;
	cout<<"employeenumber\t\temloyee compensation"<<endl;
	cout<<e1.number<<"\t\t\t"<<e1.compensation<<endl;
	cout<<e2.number<<"\t\t\t"<<e2.compensation<<endl;
	cout<<e3.number<<"\t\t\t"<<e3.compensation<<endl;
	return 0;
}
	
	

