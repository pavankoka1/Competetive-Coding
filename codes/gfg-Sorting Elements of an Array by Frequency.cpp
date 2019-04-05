#include<bits/stdc++.h>
using namespace std;
bool func(const pair<int,int> &a,const pair<int,int> &b)
{
	if(a.first==b.first)
		return (a.second<b.second);
		
	return (a.first>b.first);	
}
int main()
{
//	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n;
		pair <int,int> a[67];
		for(int i=0;i<67;i++)
		{
			a[i].first=0;
			a[i].second=i;
		}
		for(int i=0;i<n;i++)
		{
			cin>>x;
			a[x].first++;
//			a[x].second=x;
		}
		vector <pair <int,int> > v;
		for(int i=0;i<=60;i++)
			v.push_back(make_pair(a[i].first,a[i].second));
				
		sort(v.begin(),v.end(),func);
//		for(int i=0;i<60;i++)
//			cout<<v[i].first<<" "<<v[i].second<<endl;
//		cout<<"exit"<<endl;

		for(int i=0;i<61;i++)
		{
			if(v[i].first==0)
				continue;
			for(int j=0;j<v[i].first;j++)
				cout<<v[i].second<<" ";
		}
		cout<<endl;			
	}
}

