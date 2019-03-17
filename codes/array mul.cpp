#include<iostream>
using namespace std;

int main()
{
	int i,l1,l2,j,k,bx,cx;
	string s1,s2;
	cin>>s1>>s2;
	l1=s1.length();
	l2=s2.length();
	
	int a[l1],b[l2],f[l1+l2+2]={0};
	
	for(i=0;i<l1;i++)
		a[l1-i-1]=(int)s1[i]-48;
	for(j=0;j<l2;j++)
		b[l2-j-1]=(int)s2[j]-48;

	for(i=0;i<l1;i++)
	{
		int c[l1+l2+2]={0};
		cx=0;
		
		for(j=0;j<l2;j++)
		{
			bx=a[i]*b[j]+cx;
			cx=bx/10;
			c[i+j]=bx%10;
		}
		c[i+j]=cx;
		
		for(k=0;k<=i+j;k++)
		{
				f[k]=f[k]+c[k];
				f[k+1]=f[k+1]+f[k]/10;
				f[k]=f[k]%10;
		}
			
	}
	
		for(k=l1+l2;k>=0&&f[k]==0;k--)
		{
			;
		}
		
		for(i=k;i>=0;i--)
			cout<<f[i];
}
