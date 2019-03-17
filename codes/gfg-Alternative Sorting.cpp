#include<bits/stdc++.h>
using namespace std;

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
		sort(a,a+n);
		int l=0,r=n-1;
		bool f=0;
		while(n--)
		{
			if(f)
			{
				f=0;
				cout<<a[l]<<" ";
				l++;
			}
			else
			{
				f=1;
				cout<<a[r]<<" ";
				r--;
			}
		}
		cout<<endl;	
	}
}

