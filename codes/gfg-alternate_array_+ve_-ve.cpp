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
		int a[n],pc=0,nc=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]>=0)
				pc++;
			else
				nc++;	
		}
		int po=0,ne=0;
		if(pc>nc)
		{
			for(;;)
			{
//				cout<<po<<" "<<ne<<endl;
				if(po==n)
				{
					for(;ne<n;ne++)
						if(a[ne]<0)
							cout<<a[ne]<<" ";
					break;						
				}
				if(ne==n)
				{
					for(;po<n;po++)
						if(a[po]>=0)
							cout<<a[po]<<" ";
					break;						
				}
				for(;;)
				{
					if(a[po]>=0 || po==n)
						break;
					po++;	
				}
				if(po!=n)
				{
					cout<<a[po]<<" ";
					po++;
				}
				for(;;)
				{
					if(a[ne]<0 || ne==n)
						break;
					ne++;	
				}
				if(ne!=n)
				{
					cout<<a[ne]<<" ";
					ne++;
				}
			}
		}
		else
		{
			for(;;)
			{
//				cout<<po<<" "<<ne<<endl;
				if(po==n)
				{
					for(;ne<n;ne++)
						cout<<a[ne]<<" ";
					break;						
				}
				if(ne==n)
				{
					for(;po<n;po++)
						cout<<a[po]<<" ";
					break;						
				}
				for(;;)
				{
					if(a[ne]<0 || ne==n)
						break;
					ne++;	
				}
				if(ne!=n)
				{
					cout<<a[ne]<<" ";
					ne++;
				}
				for(;;)
				{
					if(a[po]>=0 || po==n)
						break;
					po++;	
				}
				if(po!=n)
				{
					cout<<a[po]<<" ";
					po++;
				}
			}
		}
		cout<<endl;
	}
}

