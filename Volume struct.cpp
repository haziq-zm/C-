#include<iostream>
using namespace std;

struct volume
{
	float len, bre, hei;
	volume()
	{
		len = 12;
		bre = 18;
		hei = 9.3;
	}
};

int main()
{
	volume v;
	float vol;
	vol = v.len*v.bre*v.hei;
	cout<<"Volume of the room is "<<vol<<" feet";
}
