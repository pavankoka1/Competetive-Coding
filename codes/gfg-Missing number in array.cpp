#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n+2],x;
//		for(int i=1;i<=n;i++)
//			a[i]=0;
		for(int i=0;i<n-1;i++)
		{
			cin>>x;
			a[x]=1;
		}
		for(int i=1;i<=n;i++)
			if(a[i]!=1)
				cout<<i<<endl;
	}
}

