#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int n,s;
		cin>>n>>s;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int l,r;
		l=0;
		r=n-1;
		while(l<r)
		{
			if(a[l]+a[r]>s)
				r--;
			if(a[l]+a[r]<s)
				l++;
			if(a[l]+a[r]==s)
				break;		
		}
		if(a[l]+a[r]==s)
			cout<<a[l]<<" "<<a[r]<<endl;
		else
			cout<<"OOPS NOT FOUND!"<<endl;		
	}
}

