#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		long long int a[k+2];
		for(int i=0;i<k;i++)
			cin>>a[i];
		sort(a,a+k);
		long long int ans=a[n-1]-a[0];
		for(int i=1;i<=k-n;i++)
		{
			ans=min(ans,a[n+i-1]-a[i]);
		}
		cout<<ans<<endl;	
	}
}

