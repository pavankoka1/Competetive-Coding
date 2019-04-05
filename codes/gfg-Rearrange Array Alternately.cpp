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
		int bn=0,an=n-1;
		while(bn<n)
		{
			b[bn]=a[an];
			bn+=2;
			an--;
		}
		an=0;
		for(int i=1;i<n;an++)
		{
			b[i]=a[an];
			i+=2;
		}
		for(int i=0;i<n;i++)
			cout<<b[i]<<" ";
		cout<<endl;		
	}
}

