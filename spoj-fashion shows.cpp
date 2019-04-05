#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int n,a[1005]={0},b[1005]={0};
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
			cin>>b[i];
		sort(a,a+n);
		sort(b,b+n);
		int c=0;
		for(int i=0;i<n;i++)
			c=c+a[i]*b[i];
		cout<<c<<endl;	
	}
	return 0;
}

