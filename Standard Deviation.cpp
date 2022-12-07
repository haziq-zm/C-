#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n, a[50], i, j, temp, sumq=0, sum=0;
	cout<<"Enter how many numbers you want: ";
	cin>>n;
	cout<<endl;
	
	for (i=0; i<n; i++)
	{
		cout<<"Enter number "<<i+1<<": ";
		cin>>a[i];
	}
	
	for(i=0; i<(n-1); i++)
	{
		for(j=(i+1); j<n; j++)
		{
			if (a[j]>a[i])
			{
				temp = a[j];
				a[j]=a[i];
				a[i] = temp;
			}
		}
	}
	
	for (i=0; i<n; i++)
	{
		sumq = sumq + a[i]*a[i];
	}
	
	for(i=0; i<n; i++)
	{
		sum = sum+a[i];
	}
	
	cout<<"Range = "<<a[0]-a[(n-1)]<<endl;
	temp = sqrt((sumq/n) -(sum/n));
	cout<<"Standard deviation = "<<temp;
}
