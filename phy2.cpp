#include<iostream>
#include<cmath>
using namespace std;
int main(){
double angle,velocity,height;
cout<<"enter launch angle: ";
cin>>angle;
cout<<"enter initial velocity :";
cin>>velocity;
height=pow(velocity,2)*sin(2*angle*3.14159/180)/9.8;
cout<<"maximum height: "<<height<<"meters<<endl";
return 0;
}
	
