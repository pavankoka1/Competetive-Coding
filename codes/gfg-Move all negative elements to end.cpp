#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n;
		int a[n];
		int l=0,r=n-1;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			if(x>=0)
			{
				a[l]=x;
				l++;
			}
			else
			{
				a[r]=x;
				r--;
			}
		}
		for(int i=0;i<l;i++)
			cout<<a[i]<<" ";
		for(int i=n-1;i>=l;i--)
			cout<<a[i]<<" ";	
		cout<<endl;	
	}
}

