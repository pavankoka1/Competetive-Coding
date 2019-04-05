#include<bits/stdc++.h>
using namespace std;
long long int el[100005];
void add(long long int a,long long int b,long long int s)
{
	for(long long int i=a;i<=b;i++)
		el[i]+=s;
}
long long int traverse(long long int a,long long int b,long long int l,long long int r)
{
	long long int ls,rs;
	if(r<a || l>b)
		return 0;
	if(l==r)
		return el[l];
	ls=traverse(a,b,l,(l+r)/2);
	rs=traverse(a,b,(l+r)/2+1,r);
	return (ls+rs);		
}
int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,q,a,b,f,s;
		cin>>n>>q;
		for(int i=1;i<=n;i++)
			el[i]=0;
		while(q--)
		{
			cin>>f;
			if(f==0)
			{
				cin>>a>>b>>s;
				add(a,b,s);
			}
			else
			{
				cin>>a>>b;
				long long int tr;
				tr=traverse(a,b,1,n);
				cout<<tr<<endl;
			}
		}
	}
}

