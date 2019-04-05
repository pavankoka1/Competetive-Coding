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
		int a[n+2];
		for(int i=1;i<=n;i++)
			cin>>a[i];
		int x;
		cin>>x;
		for(int i=x+1;i<=n;i++)
			cout<<a[i]<<" ";
		for(int i=1;i<=x;i++)
			cout<<a[i]<<" ";
		cout<<endl;			
	}
}

