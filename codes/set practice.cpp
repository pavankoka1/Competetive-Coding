#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int n,a[20];
		cin>>n;
//		set<int> s;
		set<int>:: iterator it;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
//			s.insert(a[i]);
		}
		set<int> s(a,a+n);
		it=s.begin();
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<endl;	
//		for(;it!=s.end();it++)
//			cout<<*it<<" ";
		for(auto itt : s)
			cout<<itt<<" ";
	}
}

