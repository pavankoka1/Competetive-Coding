#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
	float a[15],b[15];
	for(int i=0;i<15;i++)
	{
		a[i]=rand()%120;
		b[i]=a[i];
	}
	cout<<"Random ages are ";
	for(int i=0;i<15;i++)
		cout<<a[i]<<",";
	cout<<endl;	
	sort(b,b+15);
	float m=0;
	for(int i=0;i<15;i++)
		m+=a[i];
	m/=15;
	cout<<"Mean value = "<<m<<endl;
	cout<<"Median Value = "<<b[7]<<endl;
	float x=0;
	for(int i=0;i<15;i++)
		x+=a[i]*a[i];	
	m*=m;	
	m*=15;
	x-=m;
	x/=14;
	x=sqrt(x);
	cout<<"Standard Deviation = "<<x<<endl;
	cout<<"First Quartile = "<<b[3]<<endl;
	cout<<"Third Quartile = "<<b[11]<<endl;
	cout<<"Range = "<<b[14]-b[0]<<endl;
	cout<<"Variance = "<<x*x<<endl;
	m=0;
	for(int i=0;i<15;i++)
		m+=a[i];
	cout<<"AAD value = "<<(m-(m/15))/15<<endl;
	m/=15;
	for(int i=0;i<15;i++)
		b[i]=a[i]-m;
	for(int i=0;i<15;i++)
		if(b[i]<0)
			b[i]=0-b[i];
	sort(b,b+15);
	cout<<"MAD value = "<<b[7]<<endl;							
}

