#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,a[100005];
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>a[i];
		cout<<(n*(n-1))/2<<endl;	
	}
	return 0;
}

