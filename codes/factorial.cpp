#include<iostream>
using namespace std;
#include<math.h>

int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	
	while(t--)
{
	int n;
	cin>>n;
	
	int a[10000]={1},c=0,b,i,j;

	for(i=1;i<=n;i++)
	{
		c=0;
		
		for(j=0;j<10000;j++)
		{
			
			b=i*a[j]+c;
			c=b/10;
			a[j]=b%10;
		}
	}
	c=0;
	for(i=9999;i>=0&&a[i]==0;i--)
	{
	    c++	;
	}
	
	for(j=i;j>=0;j--)
		cout<<a[j];
	
	cout<<endl;	
}
}

