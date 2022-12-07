#include<iostream>
using namespace std;
int main()
{
	float x, y;
	cout<<"Enter the x coordinate: ";
	cin>>x;
	cout<<endl<<"Enter the y coordinate: ";
	cin>>y;
	cout<<endl<<endl;
	if (x>0 && y>0)
		cout<<"("<<x<<","<<y<<")"" is in first quadrant";
	else if (x<0 && y>0)
		cout<<"("<<x<<","<<y<<")"" is in second quadrant";
	else if (x<0 && y<0)
		cout<<"("<<x<<","<<y<<")"" is in third quadrant";
	else if (x>0 && y<0)
		cout<<"("<<x<<","<<y<<")"" is in fourth quadrant";
	else if (x==0 && y!=0)
		cout<<"("<<x<<","<<y<<")"" is on y-axis";
	else if (y==0 && x!=0)
		cout<<"("<<x<<","<<y<<")"" is on x-axis";
	else
		cout<<"("<<x<<","<<y<<")"" is on origin";
}
