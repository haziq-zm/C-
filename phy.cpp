#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double angle,velocity,time,height,range;
	const double PI=3.14159;
	const double G=32.2;
	cout<<"enter launch angle : ";
	cin>>angle;
	cout<<"enter initial velocity: ";
	cin>>velocity;
	cout<<"enter the time interval: ";
	cin>>time;
	angle=angle *PI/180.0;
	range=velocity*velocity*sin(2*angle)/G;
	cout<<"range is:"<<range<<"feet"<<endl;
	return 0;
}


