#include<iostream>
#include<fstream>
using namespace std;
#include<math.h>
int main()
{
	int k,n,c,b=1;
	cin>>n>>k;
	int a[n];
	
	for(int i=1;i<n+1;i++)
		cin>>a[i];
		
	int p=a[1],j,i;
	
	for(j=0;;j++)
	{
		c=a[b+1];
		
		if(b+k>=n)
		{
			p=p*a[n];
			break;
		}
		
		for(i=b+1;i<=b+k;i++)
		{
			if(a[i]<=c)
			{
				c=a[i];
				b=i;
			}
		}
		p=p*c;
		

	}
	cout<<p;
}


/*
4 2
1 2 3 4
*/
