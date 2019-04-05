#include<bits/stdc++.h>
using namespace std;
void circle(int a[],int l,int r)
{
	int x=a[r];
	for(int i=r;i>l;i--)
		a[i]=a[i-1];
	a[l]=x;	
}
int main()
{
//	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int i=0;
		while(i<n)
		{
			circle(a,i,n-1);
			i+=2;
		}
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<endl;		
	}
}

