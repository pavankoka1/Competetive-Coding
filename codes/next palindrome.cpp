#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	for(int i=n+1;;i++)
	{
		int x=i,y=0,z;
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
		{
			cout<<i;
			break;
		}	
	}
}
