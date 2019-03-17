#include<bits/stdc++.h>
using namespace std;

int find(int a[],int l,int r)
{
	if(l==r)
	{
		if(a[l-1]<a[l] && a[l]>a[l+1])
			return l;
		else
			return -1;	
	}
	
	if(a[l]<a[l+1] && a[r-1]>a[r])
	{
		int m=(l+r)/2;
		if(a[m-1]<a[m] && a[m]>a[m+1])
			return m;
		
		if(a[m-1]<a[m] && a[m]<a[m+1])
			return find(a,m,r);
		else
			return find(a,l,m);		
	}
	else if(a[l]<a[l+1] && a[r-1]<a[r])
		return -1;
	else if(a[l]>a[l+1] && a[r-1]>a[r])
		return -2;	
}
int bs1(int a[],int l,int r,int x)
{
//	cout<<l<<" "<<r<<endl;
	if(l==r || r-l==1)
	{
		if(a[l]==x)
			return l;
		if(a[r]==x)
			return 1;
				
		return -1;	
	}
	int m=(l+r)/2;
	if(x<a[m])
		return bs1(a,l,m,x);
	else if(x>a[m])
		return bs1(a,m,r,x);
	if(a[m]==x)
		return m;		
}
int bs2(int a[],int l,int r,int x)
{
//	cout<<l<<" "<<r<<" ";
	if(l==r || r-l==1)
	{
		if(a[l]==x)
			return l;
		if(a[r]==x)
			return 1;
				
		return -1;	
	}
	int m=(l+r)/2;
//	cout<<m<<endl;
	if(x>a[m])
		return bs2(a,l,m,x);
	else if(x<a[m])
		return bs2(a,m,r,x);
	if(a[m]==x)
		return m;		
}
int main()
{
//	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int p;
		p=find(a,0,n-1);
		cout<<p<<endl;
		int c;
		if(p==-1)
			c=bs1(a,0,n-1,x);
		else if(p==-2)
			c=bs2(a,0,n-1,x);
		if(p!=-1 && p!=-2)		
		{
			c=bs1(a,0,p,x);
			if(c==-1)
				c=bs2(a,p,n-1,x);
		}	
		if(c==-1)
			cout<<"OOPS! NOT FOUND"<<endl;
		else
			cout<<c<<endl;		
	}
}

