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
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];	
		sort(a,a+n);
		int s=0,p=n-1;
		for(int i=1;i<(n+1)/2;p--,i++)
			s+=a[p]+a[p-1]-2*a[i];	
		s+=a[n-1]+a[p]-2*a[0];
		cout<<s<<endl;	
	}
}

