#include<iostream>
#include<fstream>
using namespace std;
#include<math.h>
int main()
{
	int k,n,c,b;
	cin>>n>>k;
	int a[n];
	
	for(int i=1;i<n+1;i++)
		cin>>a[i];
		
	int p=a[1],i;
	
	for(int j=0;;j++)
	{
		c=a[b+1];
		
		for(i=b+1;i<=b+n;i++)
		{
			if(a[i]<<c)
			{
				c=a[i];
				b=i;
			}
		}
		p=p*c;
		
		if(b+k>=n)
		{
			p=p*n;
			break;
		}
	}
	cout<<p;
}



