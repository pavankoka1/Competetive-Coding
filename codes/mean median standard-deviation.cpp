#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
	int a[120],b[120];
	for(int i=0;i<120;i++)
	{
		a[i+1]=rand()%120;
		b[i+1]=a[i+1];
	}
	sort(b+1,b+121);
//	for(int i=0;i<120;i++)
//		cout<<b[i+1]<<endl;	
	float m=0;
	for(int i=1;i<=120;i++)
		m+=a[i];
	m/=120;
	cout<<"Mean value = "<<m<<endl;
	cout<<"Median value = "<<(float)(b[60]+b[61])/2<<endl;
	float x=0;
	for(int i=1;i<=120;i++)
		x+=(a[i]-m)*(a[i]-m);
	x/=120;
	x=sqrt(x);
	cout<<"Standard Deviation = "<<x<<endl;			
}

