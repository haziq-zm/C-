#include<iostream>
using namespace std;

int main()
{
	int nod, year, noy;
	cout<<"Enter the year: ";
	cin>>year;
	cout<<endl<<endl;
	noy = year - 1900;
	nod = noy*365.25;
	if(nod%7==0)
		cout<<"It's Monday on 1st January of "<<year;
	else if(nod%7==1)
		cout<<"It's Tuesday on 1st January of "<<year;
	else if(nod%7==2)
		cout<<"It's Wednesday on 1st January of "<<year;
	else if(nod%7==3)
		cout<<"It's Thursday on 1st January of "<<year;
	else if(nod%7==4)
		cout<<"It's Friday on 1st January of "<<year;
	else if(nod%7==5)
		cout<<"It's Saturday on 1st January of "<<year;
	else
		cout<<"It's Sunday on 1st January of "<<year;
	
}
