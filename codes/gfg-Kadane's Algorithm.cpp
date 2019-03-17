#include<bits/stdc++.h>
using namespace std;

int kadane(int a[],int n)
{
	int x=0,xx=0;
	for(int i=0;i<n;i++)
	{
		if(xx+a[i]>0)
			xx+=a[i];
		else
			xx=0;	
		x=max(x,xx);	
	}
	return x;
}
int main()
{
//	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],xx=0,x=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]>0)
				x=a[i];
			if(a[i]<0)
			{
				if(xx==0)
					xx=a[i];
				else
					xx=max(xx,a[i]);
//				cout<<xx<<endl;		
			}		
		}
		if(x==0)
			cout<<xx<<endl;
		else
			cout<<kadane(a,n)<<endl;	
	}
}

