#include<bits/stdc++.h>
using namespace std;

#define f(i,n) for(int i=0;i<n;i++)
int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int ans,n,k,c=0;
		cin>>n;
		int a[n];
		f(i,n)
			cin>>a[i];
		cin>>k;
		int i=0;
		while(i<n)
		{
			if(a[i]<=k)
				c++;
			i++;	
		}
		int w=0;
		f(i,c)
			if(a[i]>k)
				w++;
		ans=w;		
		for(int i=c;i<n;i++)
		{
			if((a[i-c]>k && a[i]>k) || (a[i-c]<=k && a[i]<=k))
				continue;
			else if(a[i-c]<=k && a[i]>k)
				w++;
			else if(a[i-c]>k && a[i]<=k)
				w--;
			ans=min(ans,w);				
		}
		cout<<ans<<endl;		
	}
}

