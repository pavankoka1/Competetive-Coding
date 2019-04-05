#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
	int n1,n2;
	cin>>n1>>n2;
	while(n1!=0 && n2!=0)
	{
		int a[10005],b[10005];
		for(int i=0;i<n1;i++)
			cin>>a[i];
		for(int i=0;i<n2;i++)
			cin>>b[i];
		
		int x1=a[0],x2=a[1],y1=b[0],y2=b[1];
		if(x1>x2)
		{
			x1=x1+x2;
			x2=x1-x2;
			x1=x1-x2;
		}
		if(y1>y2)
		{
			y1=y1+y2;
			y2=y1-y2;
			y1=y1-y2;
		}
		for(int i=2;i<n1;i++)
		{
			if(a[i]<=x2 && a[i]<=x1)
			{
				x2=x1;
				x1=a[i];				
			}
			else if(a[i]<=x2 && a[i]>x1)
			{
				x2=a[i];
			}
		}
		for(int i=2;i<n2;i++)
		{
			if(b[i]<=y2 && b[i]<=y1)
			{
				y2=y1;
				y1=b[i];
			}
			else if(b[i]<=y2 && b[i]>y1)
			{
				y2=b[i];
			}
		}
/*		if(x1<y1)
		{
			if(y1>=x2)
				cout<<"N"<<endl;
			else
				cout<<"Y"<<endl;	
		}
		else if(y1<x1)
		{
			if(x1>=y2)
				cout<<"N"<<endl;
			else
				cout<<"Y"<<endl;	
		}
		else if(x1=y1)
		{
			if(x2==y1 || y2==x1)
				cout<<"N"<<endl;
			else
				cout<<"Y"<<endl;	
		}
*/		
		if(x1>=y2)
			cout<<"N"<<endl;
		else
			cout<<"Y"<<endl;	
		cin>>n1>>n2;	
	}
}

