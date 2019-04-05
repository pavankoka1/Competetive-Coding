#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int l,x,y;
		cin>>l;
		int a[l],b[l];
		
		for(int i=0;i<l;i++)
			cin>>a[i]>>b[i];
		
		x=a[0];y=b[0];
		
		for(int i=1;i<l;i++)
		{
			x=x^a[i];
			y=y^b[i];
		}
		
		if(y<x)
			x=y;
		
		cout<<x<<endl;
	}
}
