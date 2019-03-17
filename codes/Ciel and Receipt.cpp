#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int b=0,a,sum=0;
		cin>>a;
abc:
	{
		b=a/2048;
		if(b!=0)
		a=a/2048;
 
	{
	   for(int i=0;i<11;i++)
		{
			if((a%2)==1)
			{
				sum++;
				//cout<<a<<endl;
			}
			a=a/2;
		}
	}
	}
		if(b!=0)
		{
			a=b;
			goto abc;
		}
		cout<<sum<<endl;
	}
}
