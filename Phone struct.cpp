#include<iostream>
using namespace std;

struct phone
{
	int ac, exc, num;
};

int main(){
	phone p1, p2;
	cout<<"Example number:\n";
	p1.ac = 231;
	p1.exc = 453;
	p1.num = 1001;
	cout<<p1.ac<<p1.exc<<p1.num<<endl<<endl;
	
	cout<<"Enter your own number:\n\n"<<"Area code: ";
	cin>>p2.ac;
	cout<<"\nExchange: ";
	cin>>p2.exc;
	cout<<"\nNumber: ";
	cin>>p2.num;
	
	cout<<endl<<p2.ac<<p2.exc<<p2.num;
}
