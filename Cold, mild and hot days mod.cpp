#include<iostream>
using namespace std;

int main()
{
	int days, i, d[30], hot=0, mild=0, cold=0;
	float sum=0, avg;
	cout<<"How many days? ";
	cin>>days;
	cout<<endl<<endl;
	cout<<"Enter temp for each day in Fahrenheit\n\n";
	for(i=0; i<days; i++)
	{
		cout<<"Day "<<i+1<<" ";
		cin>>d[i];
		sum = sum + d[i];
		if(d[i]>=85)
			hot++;
		if(d[i]>=60 && d[i]<85)
			mild++;
		if(d[i]<60)
			cold++;
	}
	
	avg = sum/days;
	
	cout<<"\n\nNumber of hot days: "<<hot;
	cout<<"\nNumber of mild days: "<<mild;
	cout<<"\nNumber of cold days: "<<cold<<"\n\n";
	
	cout<<"Average temperature: "<<avg;
}
