#include<iostream>
#include<math.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	
	while(t--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		
		if(a>=b&&a>=c)
		{
			if(b>c)
				cout<<b<<endl;
			
			if(c>b)
				cout<<c<<endl;	
		}
		
		if(b>=a&&b>=c)
		{
			if(a>c)
				cout<<a<<endl;
				
			if(c>a)
				cout<<c<<endl;	
		}
		
		if(c>=a&&c>=b)
		{
			if(a>b)
				cout<<a<<endl;
				
			if(b>a)
				cout<<b<<endl;	
		}
		
	}
}
