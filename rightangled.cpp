#include<iostream>
#include<cmath>
using namespace std;
int main()

{
	double x1,y1,x2,y2,x3,y3,a,b,c;
	cout<<"enter the coordinates of the first point:";
	cin>>x1>>y1;
		cout<<"enter the coordinates of the second point:";
	cin>>x2>>y2;
		cout<<"enter the coordinates of the third point:";
	cin>>x3>>y3;
	a=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	b=sqrt(pow(x3-x2,2)+pow(y3-y2,2));
	c=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
	if(a*a + b*b==c*c || a*a + c*c== b*b || b*b + c*c == a*a)
	{
		cout<<"the triangle is right triangle"<<endl;	
	}
	else 
	cout<<"triangle is not right angled";
}

