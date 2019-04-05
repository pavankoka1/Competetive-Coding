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
		int p=0;
		while(p<n && a[p]<0)
			p++;
		for(int i=0;i<n;)
		{
			i=p;
			while(a[i]>0 && i<n)
				i++;
			cout<<p<<" "<<i<<endl;	
			if(a[i]<0)
				swap(a[i],a[p]);
			p++;
			while(p<n && a[p]<0)
			p++;
			if(p==n)
				break;		
		}
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";		
	}
}

