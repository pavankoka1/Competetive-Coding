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
		for(int i=1;i<=n;i++)
			cin>>a[i];
		cout<<a[n]<<" ";
		for(int i=1;i<n;i++)
			cout<<a[i]<<" ";
		cout<<endl;		
	}
}

