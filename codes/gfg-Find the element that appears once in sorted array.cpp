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
		int f=0;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if((i%2!=0 && f==0) && i<n-1)
			{
//				cout<<i<<endl;
				if(a[i]!=a[i-1])
				{
//					cout<<"in"<<endl;
					cout<<a[i-1]<<endl;
					f=1;
				}	
			}
			if(i==n-1 && f=1)
				cout<<a[i-1]<<endl;
		}
	}
}

