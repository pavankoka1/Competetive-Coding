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
		bool f=0;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int i=0,l;
		while(i<n-1)
		{
			if(a[i]<a[i+1])
			{
				f=1;
				l=i;
				while(a[i]<=a[i+1] && i<n-1)
					i++;
				cout<<"("<<l<<" "<<i<<")"<<" ";		
			}
			i++;
		}
		if(!f)
			cout<<"No Profit";
		cout<<endl;		
	}
}

