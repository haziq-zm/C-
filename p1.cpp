#include<iostream>
using namespace std;
struct point
{
	int x,y;
	
};
int main(){
point p1,p2,p3;
cout<<"enter coordinate for p1:"<<endl;
cin>>p1.x>>p1.y;
cout<<"enter coordinate for p2:"<<endl;
cin>>p2.x>>p2.y;
p3.x= p1.x + p2.x;
p3.y = p2.x + p2.y;
cout<<"coordinates of p1+p2 are :"<<p3.x<<","<<p3.y;
}
