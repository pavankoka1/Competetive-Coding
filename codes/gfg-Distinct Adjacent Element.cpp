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
		map< int, int> m;
		
		for(int i=0;i<n;i++)
			m[a[i]]++;
		
		int mx=0;
		
		for(int i=0;i<n;i++)
			if((mx<m[a[i]]))
				mx=m[a[i]];
				
		if(mx > (n+1)/2)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;					
	}
}

