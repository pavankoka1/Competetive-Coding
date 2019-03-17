#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		if(a[0]==0)
			b[0]=-1;
		else
			b[0]=1;
		int min=b[0],max=b[0];			
		for(int i=0;i<n;i++)
		{
			if(a[i]==0)
				b[i]=b[i-1]-1;
			if(a[i]==1)
				b[i]=b[i-1]+1;
			
			if(b[i]>max)
				max=b[i];
			if(b[i]<min)
				min=b[i];			
		}
		int x=max-min+1;
		int h[x];
		for(int i=0;i<x;i++)
			h[i]=-1;
		for(int i=n-1;i>=0;i--)
			if(i>h[b[i]-min])
				h[b[i]-min]=i;
		int ans=-1;
		for(int i=0;i<n;i++)
			cout<<b[i]<<" ";
		cout<<endl;
		cout<<x<<" "<<min<<" "<<max<<endl;
		for(int i=0;i<x;i++)
			cout<<h[i]<<" ";
		cout<<endl;
		for(int i=0;i<n;i++)
			if(b[i]==0 && i>ans)
				ans=i;		
		for(int i=0;i<n;i++)
		{
			cout<<i<<" "<<h[b[i]-min]<<endl;
			if(h[b[i]-min]-i>ans)
				ans=h[b[i]-min]-i;
		}
		cout<<ans<<endl;
	}
}

