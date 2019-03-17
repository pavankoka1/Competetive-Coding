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
			int x=a[n-1],c=1;
			b[0]=a[n-1];	
			for(int i=n-2;i>=0;i--)
			{
				if(a[i]>=x)
					b[c++]=a[i];
				x=max(x,a[i]);	
			}
			for(int i=c-1;i>=0;i--)
				cout<<b[i]<<" ";
			cout<<endl;		
	}
}

