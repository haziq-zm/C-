#include<iostream>
using namespace std;
int main()
{
	double m1,m2,v1,v2,v1f,v2f;
	cout<<"enter mass of first object in kg's : ";
	cin>>m1;
	cout<<"enter mass of second object in kg's : ";
	cin>>m2;
	cout<<"enter velocity of first object in m/s : ";
	cin>>v1;
	cout<<"enter velocity of second object in kg's : ";
	cin>>v2;
	v1f=(m1-m2)/(m1+m2)*v1 +2*m2/(m1+m2)*v2;
	v2f=2*m1/(m1+m2)*v1+(m2-m1)/(m1+m2)*v2;
	if(v1f==v1 && v2f==v2)
	{
		cout<<"the collision is elastic"<< endl;
	}
	else
	{
		cout<<"the collision is inelastic"<<endl;
		
	}
	return 0;
}
