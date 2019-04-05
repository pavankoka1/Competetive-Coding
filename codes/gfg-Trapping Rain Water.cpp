#include<bits/stdc++.h>
using namespace std;

int count(int a[],int l,int r)
{
	int x=0;
	for(int i=l+1;i<r;i++)
		x+=a[i];
		
	return ((min(a[l],a[r]))*(r-l-1)-x);
}
int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int n,max=0,c=0;
		cin>>n;
		int a[n];		
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]>a[max])
				max=i;
		}
		for(int i=0;i<max;)
		{
			int j=i+1;
			for(;j<=max;j++)
				if(a[j]>a[i])
					break;
//			cout<<i<<" "<<j<<endl;		
			c+=count(a,i,j);
//			cout<<c<<endl;
			i=j;		
		}
		int l=max,r=n-1;
		int m=(l+r)/2;
		for(int i=l;i<=m;i++)
			swap(a[i],a[r--]);
		for(int i=max;i<n-1;)
		{
			int j=i+1;
			for(;j<n;j++)
				if(a[j]>a[i])
					break;
//			cout<<" "<<i<<" "<<j<<endl;		
			c+=count(a,i,j);
//			cout<<" "<<c<<endl;
			i=j;		
		}
		cout<<c<<endl;	
	}
}

