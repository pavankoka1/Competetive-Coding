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
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		int k;
		cin>>k;
		int i=0,m=10000007;
		while(i+k-1 < n)
		{
			if(a[i+k-1]-a[i] < m)
				m=a[i+k-1]-a[i];
			i++;	
		}
		cout<<m<<endl;	
	}
}

