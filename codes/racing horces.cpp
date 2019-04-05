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
		long long int s[5005]={0},a[5005]={0};
		
		for(int i=0;i<n;i++)
			cin>>s[i];
		
		int x;
		sort(s,s+n);
		
		for(int i=0;i<n-1;i++)
		{
				a[i]=s[i]-s[i+1];
				if(a[i]<0)
					a[i]=0-a[i];
		}
		
		sort(a,a+n-1);	
		cout<<a[0]<<endl;	
	}
}
