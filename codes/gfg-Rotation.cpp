#include<bits/stdc++.h>
using namespace std;
int n;
int func(int a[],int l,int r)
{
//	cout<<l<<" "<<r<<endl;
	if(a[r]>a[l])
		return 0;
	if(l==0 && a[l+1]<a[l])
		return 1;
	if(r==n-1 && a[r]<a[r-1])
		return r;	
	if(r-1==l || l==r)
	{
//		cout<<"in"<<endl;
		if(r!=n-1)
			if(a[r+1]>=a[r] && a[r-1]>a[r])
				return r;
		if(l!=0)
			if(a[l+1]>=a[l] && a[l-1]>a[l])
				return l;
		return 0;				
	}	
	if(a[l]==a[r])
		return func(a,l,r-1);
	if(a[r]>a[l])
		return 0;
	int m=(l+r)/2;
	if(a[m+1]>a[m] && a[m-1]>a[m])
		return m;
	if(a[m]>a[r])
		return func(a,m,r);
	if(a[l]>a[m])
		return func(a,l,m);	
	
	if(a[m]==a[l])
		return func(a,l,m-1);
	if(a[m]==a[r])
		return func(a,m,r-1);								
}
int main()
{
//	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		cout<<a[func(a,0,n-1)]<<endl;	
	}
}

