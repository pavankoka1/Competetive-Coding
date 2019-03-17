#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int n,x=-1;
		cin>>n;
		int a[n],b[n],c[n];
		cin>>a[0];
		b[0]=a[0];
		for(int i=1;i<n;i++)
		{
			cin>>a[i];
			(a[i]>b[i-1])? b[i]=a[i]: b[i]=b[i-1];		
		}
		c[n-1]=a[n-1];
		for(int i=n-2;i>=0;i--)
			(a[i]<c[i+1])? c[i]=a[i]: c[i]=c[i+1];
//		for(int i=0;i<n;i++)
//			cout<<b[i]<<" ";
//		cout<<endl;
//		for(int i=0;i<n;i++)
//			cout<<c[i]<<" ";		
		for(int i=1;i<n-1;i++)
		{
			if(a[i]<c[i+1] && a[i]>b[i-1])
			{
				x=i;
				break;
				}	
		}
		if(x!=-1)
			cout<<a[x]<<endl;
		else
			cout<<x<<endl;					
	}
}

