#include<bits/stdc++.h>
using namespace std;

int call(int a[],int l,int r)
{
//	for(int i=l;i<=r;i++)
//			cout<<a[i]<<" ";
//		cout<<endl;	
	if(r-l <= 1)
		return 0;
	int m=(l+r-1)/2;
	m++;
//	cout<<m<<endl;
	int k=m;
	for(int i=((l+k)/2);i<k;i++,m++)
	{
		a[i]=a[i]+a[m];
		a[m]=a[i]-a[m];
		a[i]=a[i]-a[m];
	}
	call(a,l,k-1);
	call(a,k,r);
	return 0;	
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
		for(int i=1;i<=n;i++)
			cin>>a[i];
		call(a,1,n);
		for(int i=1;i<=n;i++)
			cout<<a[i]<<" ";
			cout<<endl;	
	}
}

