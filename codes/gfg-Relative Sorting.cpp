#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	int b[1007][2];
	while(t--)
	{
		for(int i=0;i<1006;i++)
		{
			b[i][0]=0;
			b[i][1]=0;
		}
		int n,m;
		cin>>n>>m;
		int a[n][2],c[m];
		for(int i=0;i<n;i++)
		{
			cin>>a[i][0];
			a[i][1]=0;
//			if(b[a[i]][0]==1)
//				b[a[i]][1]++;
		}
		for(int i=0;i<m;i++)
		{
//			b[i][0]=0;
//			b[i][1]=0;
			cin>>c[i];
			b[c[i]][0]=1;
		}
		for(int i=0;i<n;i++)
		{
//			cin>>a[i][0];
			if(b[a[i][0]][0]==1)
			{
				b[a[i][0]][1]++;
				a[i][1]++;
			}
		}
//		for(int i=0;i<m;i++)
//			cout<<c[i]<<" ";
//		cout<<endl;
//		for(int i=0;i<m;i++)
//			cout<<b[c[i]][0]<<" ";
//		cout<<endl;
//		for(int i=0;i<m;i++)
//			cout<<b[c[i]][1]<<" ";
//		cout<<endl;		
		for(int i=0;i<m;i++)
		{
			if(b[c[i]][1]>0)
			{
				for(int j=0;j<b[c[i]][1];j++)
					cout<<c[i]<<" ";
			}
		}
		vector <int> v;
		for(int i=0;i<n;i++)
		{
			if(a[i][1]==0)
				v.push_back(a[i][0]);
		}
		sort(v.begin(),v.end());
		for(int i=0;i<v.size();i++)
			cout<<v[i]<<" ";
		cout<<endl;	
	}
}

