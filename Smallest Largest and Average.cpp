#include<iostream>
using namespace std;

int main()
{
	int n, a[50], i, j, temp, sum=0;
	cout<<"Enter how many numbers you want: ";
	cin>>n;
	cout<<endl;
	
	for (i=0; i<n; i++)
	{
		cout<<"Enter number "<<i+1<<": ";
		cin>>a[i];
	}
	
	for(i=0; i<n; i++)
	{
		sum = sum+a[i];
	}
	cout<<"\n\nAverage value of the numbers: "<<sum/n<<endl;
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
	
}
