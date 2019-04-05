#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],b[n];
		for(int i=1;i<=n;i++)
			cin>>a[i];
		int loop=n;
		for(int i=1;i<loop;i++)
		{
			b[1]=a[n];
//			cout<<b[1];
			for(int j=2;j<=n;j++)
			{
				b[j]=a[j-1];
//				cout<<b[j];
			}
//			cout<<endl;
			if(n>=i)	
				b[n-i+1]=-1;
			else
				b[1]=-1;
			int k=1;	
			for(int j=1;j<n;j++)
			{
				if(b[j]==-1)
					continue;
		
				a[k]=b[j];
				k++;	
			}
			n--;	
		}
		cout<<a[1]<<endl;		
	}
}

