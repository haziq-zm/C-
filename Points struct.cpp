#include<iostream>
using namespace std;

struct point
{
	int x, y;
};

int main()
{
	point p1, p2, p3;
	cout<<"Enter the first point: \n"<<"x = ";
	cin>>p1.x;
	cout<<"y = ";
	cin>>p1.y;
	
	cout<<"\nEnter the second point: \n"<<"x = ";
	cin>>p2.x;
	cout<<"y = ";
	cin>>p2.y;
	
	cout<<"\n\nFirst point is ("<<p1.x<<","<<p1.y<<")";
	cout<<"\nSecond point is ("<<p2.x<<","<<p2.y<<")";
	
	p3.x = p1.x + p2.x;
	p3.y = p1.y + p2.y;
	
	cout<<"\nThird point is ("<<p3.x<<","<<p3.y<<")";
}
