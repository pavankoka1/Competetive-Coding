#include<iostream>
using namespace std;
#include<math.h>

int main()
{
	int n,k,p,i,j,bx;
	cin>>n;
	
	char x[n],y[n];
	int a[n],b[n],f[2*n+2]={0};
	
	for(int i=0;i<n;i++)
		cin>>x[i];
		
	for(int i=0;i<n;i++)
		cin>>y[i];
		
	for(int i=0;i<n;i++)
		a[i]=(int)x[i]-48;
	
	for(int i=0;i<n;i++)
		b[i]=(int)y[i]-48;
			
	for(i=n-1;i>=0;i--)
	{
		int c[2*n+2]={0};
			
		p=0;
		for(j=n-1;j>=0;j--)
		{
			bx=a[i]*b[j]+p;
			p=bx/10;
			c[i+j+1]=bx%10;
		}
		c[i+j+1]=p+c[1+i+j];
		
		for(k=0;k<2*n+1;k++)
			f[k]=c[k]+f[k];
	}
	
	
	for(int j=2*n+1;j>=0;j--)
		cout<<f[j];	
}
