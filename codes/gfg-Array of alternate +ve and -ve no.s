#include<iostream.h>
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
			if(pc==n)
			{
				for(;ne<n;ne++)
					cout<<a[ne]<<" ";					
			}
			if(nc==n)
			{
				for(;po<n;po++)
					cout<<a[po]<<" ";					
			}
			for(;;)
			{
				if(a[po]>0)
					break;
			}
			cout<<a[po]<<" ";
			po++;
			for(;;)
			{
				if(a[ne]<0)
					break;
			}
			cout<<a[ne]<<" ";
			ne++;
		}
		cout<<endl;
	}
}

