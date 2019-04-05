#include<bits/stdc++.h>
using namespace std;

#define ll long long int
ll lazy[4*100001],tree[4*100001];

void update_tree(ll a,ll b,ll i,ll j,ll s,ll node)
{
//	cout<<a<<" "<<b<<" "<<i<<" "<<j<<endl;
	if(a>b || i>b || j<a)
		return;
	if(lazy[node])
	{
		tree[node]+=(b-a+1)*lazy[node];
		if(a!=b)
		{
			lazy[2*node]+=lazy[node];
			lazy[2*node+1]+=lazy[node];
		}
		lazy[node]=0;
	}
	if(i==a && j==b)
	{
		tree[node]+=(b-a+1)*s;
		if(a!=b)
		{
			lazy[2*node]+=s;
			lazy[2*node+1]+=s;
		}
		return;
	}
	ll mid=(a+b)/2;
	if(j<=mid)
		update_tree(a,mid,i,j,s,2*node);
	if(i>mid)
		update_tree(mid+1,b,i,j,s,2*node+1);
	if(i<=mid && j>mid)
	{
		update_tree(a,mid,i,mid,s,2*node);
		update_tree(mid+1,b,mid+1,j,s,2*node+1);
	}
	tree[node]+=(j-i+1)*s;		
}
ll query(ll a,ll b,ll i,ll j,ll node)
{
//	cout<<a<<" "<<b<<" "<<i<<" "<<j<<" "<<tree[node]<<" "<<node<<endl;
	if(lazy[node])
	{
		tree[node]+=(b-a+1)*lazy[node];
		if(a!=b)
		{
			lazy[2*node]+=lazy[node];
			lazy[2*node+1]+=lazy[node];
		}
		lazy[node]=0;
	}
//	cout<<a<<" "<<b<<" "<<i<<" "<<j<<" "<<tree[node]<<" "<<node<<endl;
//	cout<<tree[node]<<" "<<node<<endl;
	if(a==i && b==j)
		return tree[node];
	ll mid=(a+b)/2;	
	if(j<=mid)
		return query(a,mid,i,j,2*node);
	if(i>mid)
		return query(mid+1,b,i,j,2*node+1);
	if(i<=mid && j>mid)
		return (query(a,mid,i,mid,2*node)+query(mid+1,b,mid+1,j,2*node+1));			
}
int main()
{
//	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int n,c;
		cin>>n>>c;
		memset(tree,0,sizeof tree);
		memset(lazy,0,sizeof lazy);
		while(c--)
		{	
			int f;
			cin>>f;
			if(f==0)
			{
				ll i,j,s;
				cin>>i>>j>>s;
				update_tree(1,n,i,j,s,1);
			}
			else
			{
				ll i,j;
				cin>>i>>j;
				cout<<query(1,n,i,j,1)<<endl;
			}
//			for(int i=1;i<=15;i++)
//				cout<<tree[i]<<" "<<lazy[i]<<endl;
//			cout<<endl;
		} 
	}
}

