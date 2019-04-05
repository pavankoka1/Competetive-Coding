#include<bits/stdc++.h>
using namespace std;
int merge(int a[],int l,int r)
{
	int m=(l+r)/2;
	if(l==r)
		return 0;
	merge(a,l,m);
	merge(a,m+1,r);
	int i=0;
	while(i<m+1 && a[i]<0)
		i++;
	int p=r;
	while(a[p]>0 && p>m)
		p--;
	while((a[i]>0 && i<=m) && (a[p]<0 && p>m))
	{
		swap(a[i],a[p]);
		i++;
		p--;
	}			
}
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
		merge(a,0,n-1);
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";	
	}
}

