#include<iostream>
using namespace std;

int main()
{
	int x,y=0,z,l=0;
	cin>>x;
	z=x;
	for(;;)
	{
		if(x==0)
			break;
		
		y=10*y;
		y=(x%10)+y;
		x=x/10;
	}
	if(y==z)
		cout<<"yes";
	else
		cout<<"no";	
}

