#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	int n,k;
	long long dummy;
	cin>>n>>k;
	vector<long long > v;
	vector<long long > p;
	for(int i=0;i<n;i++){
		cin>>dummy;
		v.push_back(dummy);
	}
	for(int i=0;i<n;i++){
		cin>>dummy;
		p.push_back(dummy);
	}
	map<long long,int> m;
	for(int i=0;i<n;i++)
		m.insert(pair<long long, int> (v[i],p[i]));
//	map<long long, int>::iterator it;	
	for(map<long long, int>::iterator it=m.begin();it!=m.end();it++)
		cout<<it->first<<" "<<it->second<<endl;		
	int q;
	cin>>q;
	while(q--)
	{
		cin>>dummy;
		int g;
		cin>>g;
		int x=m[dummy];
		if(g<=x && g>x/k)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;	
	}
}

