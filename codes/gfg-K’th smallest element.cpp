#include<bits/stdc++.h>
using namespace std;

int a[1000000];
int b[1000000];

int quicksort(int l,int r)
{
//	for(int i=l;i<=r;i++)
//		cout<<a[i]<<" ";				
//	cout<<endl;
	int p=l,x;
	for(int i=l;i<r;i++)
		if(a[i]<a[r])
			b[p++]=a[i];
	b[p]=a[r];
	x=p++;
//	cout<<" "<<p<<endl;
	for(int i=l;i<r;i++)
		if(a[i]>a[r])
			b[p++]=a[i];
	for(int i=l;i<=r;i++)
		a[i]=b[i];		
	return x;				
}
int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>a[i];
		cin>>k;	
		int l=0,r=n-1;
		int x=quicksort(l,r);
		while(0==0)
		{
//			for(int i=0;i<n;i++)
//				cout<<a[i]<<" ";				
//				cout<<endl;
//				cout<<l<<" "<<r<<" "<<x<<" "<<k<<endl;
			if(x==k-1)
			{
				cout<<a[x]<<endl;
				break;
			}
			if(x<k-1)
			{
				l=x+1;
				x=quicksort(l,r);
			}
			if(x>k-1)
			{
				r=x-1;
				x=quicksort(l,r);
			}		
		}
	}
}

