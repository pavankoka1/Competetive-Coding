#include<bits/stdc++.h>
using namespace std;

long long int getmerge(int a[],int l,int r){
//	cout<<l<<" "<<r<<endl;
	int m=(l+r)/2;
	long long int c=0;
	if(l==r) return 0;
	c+=getmerge(a,l,m);
	c+=getmerge(a,m+1,r);
	int b[r+1],p=l;
	int i=l,j=m+1;
	while(p<=r){
		if(i>m){
			while(p<=r)
				b[p++]=a[j++];
			break;	
		}
		if(j>r){
			while(p<=r)
				b[p++]=a[i++];
			break;	
		}
		if(a[i]<=a[j])
			b[p++]=a[i++];
		else
		{
			c+=m-i+1;
			b[p++]=a[j++];
		}
	}
	for(int i=l;i<=r;i++)
		a[i]=b[i];
	return c;	
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
		cout<<getmerge(a,0,n-1)<<endl;	
	}
}

