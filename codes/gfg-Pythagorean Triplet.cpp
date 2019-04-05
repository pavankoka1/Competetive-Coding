#include<bits/stdc++.h>
using namespace std;

int check(int a[],int x)
{
	int l=0,r=x-1;
	while(l<r)
	{
		cout<<l<<" "<<r<<" "<<x<<endl;
		if(a[l]+a[x]==a[r])
			return 1;
		(a[l]+a[r]>a[x])? l++: r--;	
	}
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
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			a[i]*=a[i];
		}
		bool f=0;
		sort(a,a+n);
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<endl;	
		for(int i=n-1;i>=2;i--)
		{
			if(check(a,i))
			{	
				f=1;
				break;
			}
		}
			
		f? cout<<"Yes"<<endl: cout<<"No"<<endl;			
	}
}

