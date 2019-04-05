#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		vector <int> v;
		for(int i=0;i<n;i++)
		{
			v.push_back(i);
			int x=v.size();
			if(x>=2)
			{
				while(a[v[x-1]]>a[v[x-2]])
				{	
					v.erase(v.begin()+x-2);
					x--;
					if(x<2)
						break;
				}
			}
			if(i>=k-1)
				cout<<a[v[0]]<<" ";
			while(v.size()!=0 && (v[0]<i-k+2))
				v.erase(v.begin());		
		}
		cout<<endl;		
	}
}

