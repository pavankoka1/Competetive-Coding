#include<bits/stdc++.h>
using namespace std;

int a[10000007];

void rotate(int l,int r)
{
	int m=(l+r)/2;
	for(int i=l;i<=m;i++)
		swap(a[i],a[r--]);
}
int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		for(int i=0;i<n;i++)
			cin>>a[i];
//		for(int i=0;i<n;i++)
//			cout<<a[i]<<" ";	
		int i=0;	
		for(;i+k-1<n;)
		{
			rotate(i,i+k-1);
//			for(int i=0;i<n;i++)
//				cout<<a[i]<<" ";
//			cout<<i<<" "<<i+k-1<<endl;
			i+=k;
		}
//		cout<<i<<endl;
		if(i < n)
			rotate(i,n-1);
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<endl;			
	}
}

