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
		for(int i=0;i<n-1;i++)
		{
//			cout<<i<<" "<<a[i]<<" "<<a[i+1]<<endl;
			if(i%2==0)
			{
//				cout<<"out";
				if(a[i]>=a[i+1])
					swap(a[i],a[i+1]);
			}
			else
			{
//				cout<<"in";
				if(a[i]<=a[i+1])
					swap(a[i],a[i+1]);
			}
//			for(int j=0;j<n;j++)
//				cout<<a[j]<<" ";
//			cout<<endl;				
		}
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<endl;		
	}
}

