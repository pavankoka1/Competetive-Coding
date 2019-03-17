#include<bits/stdc++.h>
using namespace std;

bool comp(int a,int b)
{
	if((a<0 && b<0) || (a>=0 && b>=0))
		return false;
//	if(a==0)
//		return true;
	if(a>=0 && b<0)
		return false;	
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
		sort(a,a+n,comp);
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";	
	}
}

