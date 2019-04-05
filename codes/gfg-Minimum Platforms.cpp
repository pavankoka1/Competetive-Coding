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
		int a[n],b[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
			cin>>b[i];	
//		for(int i=0;i<n;i++)
//			cout<<a[i]<<" "<<b[i]<<endl;	
		sort(a,a+n);
		sort(b,b+n);
//		for(int i=0;i<n;i++)
//			cout<<a[i]<<" "<<b[i]<<endl;
		int p=0,m=0;
		int i=0,j=0;
		while(i<n && j<n)
		{
//			cout<<a[i]<<" "<<b[j]<<" "<<p<<endl;
			if(a[i]<=b[j])
				i++;
			else
				j++;
			m=max(m,i-j);	
		}
		cout<<m<<endl;	
	}
}

