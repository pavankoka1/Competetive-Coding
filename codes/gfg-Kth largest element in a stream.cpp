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
		cin>>k>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		vector <int> v;
		for(int i=0;i<k-1;i++)
			cout<<"-1 ";
		for(int i=0;i<n;i++)
		{
//			cout<<"i="<<i<<endl;
			int x=v.size();
			if(v.size()>0)
			{
				if(a[i]>v[x-1])
				{
					int j=x;
					v.push_back(a[i]);
					while(j>0 && v[j]>v[j-1])
					{
						swap(v[j],v[j-1]);
						j--;
					}
				}
				else
					v.push_back(a[i]);			
			}
			else
				v.push_back(a[i]);
//			for(int tt=0;tt<v.size();tt++)
//					cout<<v[tt]<<" ";
//				cout<<endl;
//			cout<<v.size()<<endl;
			while(v.size()>k)
					v.pop_back();
//			cout<<v.size()<<endl;			
			if(i>k-2)
				cout<<v[v.size()-1]<<" ";
		}
		cout<<endl;		
	}
}

