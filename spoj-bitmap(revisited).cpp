#include<bits/stdc++.h>
using namespace std;

int call(int a[][185][1],int i,int j,int n,int m)
{
	int x;
	if(a[i][j][1]==1)
		return 0;
	
		if(i==1 && (j!=1 || j!=m))
		{
			if(a[i][j][0]==0)
				a[i][j][1]=1;
			else
				a[i][j][0]=min(a[i][j][0],min(a[i][j+1][0],min(a[i][j-1][0],a[i+1][j][0]))+1);
			x=call(a,i+1,j,n,m);
			x=call(a,i,j+1,n,m);
			x=call(a,i,j-1,n,m);
			return 0;		
		}
		if(i==n && (j!=1 || j!=m))
		{
			if(a[i][j][0]==0)
				a[i][j][1]=1;
			else
				a[i][j][0]=min(a[i][j][0],min(a[i][j-1][0],min(a[i][j+1][0],a[i-1][j][0]))+1);
			x=call(a,i,j+1,n,m);
			x=call(a,i+1,j,n,m);
			x=call(a,i,j-1,n,m);
			return 0;		
		}
		if(j==1 && (i!=1 || i!=n))
		{
			if(a[i][j][0]==0)
				a[i][j][1]=1;
			else
				a[i][j][0]=min(a[i][j][0],min(a[i][j+1][0],min(a[i+1][j][0],a[i-1][j][0]))+1);
			x=call(a,i,j+1,n,m);
			x=call(a,i+1,j,n,m);
			x=call(a,i,j-1,n,m);
			return 0;		
		}
		if(j==m && (i!=1 || i!=n))
		{
			if(a[i][j][0]==0)
				a[i][j][1]=1;
			else
				a[i][j][0]=min(a[i][j][0],min(a[i+1][j][0],min(a[i-1][j][0],a[i][j-1][0]))+1);
			x=call(a,i+1,j,n,m);
			x=call(a,i-1,j,n,m);
			x=call(a,i,j-1,n,m);
			return 0;		
		}
		if(i==1 && j==1)
		{
			if(a[i][j][0]==0)
				a[i][j][1]=1;
			else
				a[i][j][0]=min(a[i][j][0],min(a[i+1][j][0],a[i][j+1][0])+1);
			x=call(a,i+1,j,n,m);
			x=call(a,i,j+1,n,m);	
			return 0;	
		}
		if(i==1 && j==m)
		{
			if(a[i][j][0]==0)
				a[i][j][1]=1;
			else
				a[i][j][0]=min(a[i][j][0],min(a[i+1][j][0],a[i][j-1][0])+1);
			x=call(a,i+1,j,n,m);
			x=call(a,i,j-1,n,m);	
			return 0;	
		}
		if(i==n && j==1)
		{
			if(a[i][j][0]==0)
				a[i][j][1]=1;
			else
				a[i][j][0]=min(a[i][j][0],min(a[i-1][j][0],a[i][j+1][0])+1);
			x=call(a,i-1,j,n,m);
			x=call(a,i,j+1,n,m);	
			return 0;	
		}
		if(i==n && j==m)
		{
			if(a[i][j][0]==0)
				a[i][j][1]=1;
			else
				a[i][j][0]=min(a[i][j][0],min(a[i-1][j][0],a[i][j-1][0])+1);
			x=call(a,i-1,j,n,m);
			x=call(a,i,j-1,n,m);	
			return 0;	
		}
		if(a[i][j][0]==0)
			a[i][j][1]=1;
		else
			a[i][j][0]=min(a[i][j][0],min(a[i-1][j][0],min(a[i+1][j][0],min(a[i][j+1][0],a[i][j+1][0])))+1);
		x=call(a,i-1,j,n,m);
		x=call(a,i+1,j,n,m);
		x=call(a,i,j+1,n,m);
		x=call(a,i,j-1,n,m);
		return 0;
}
int main()
{
//	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[185][185][1];
		string s;
		
		for(int i=1;i<=n;i++)
		{
			cin>>s;
			for(int j=1;j<=m;j++)
			{
				if(s[j-1]=='1')
					a[i][j][0]=0;
				else
					a[i][j][0]=n+m;
				
				a[i][j][1]=0;		
			}
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
				cout<<a[i][j][0]<<" ";
			cout<<endl;	
		}
		int i,j;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
			{
				if(a[i][j][0]==0)
					break;
			}
			if(a[i][j][0]==0)
				break;
		}
		for(int i=0;i<=n+1;i++)
			a[i][0][0]=n+m;
		for(int i=0;i<=m+1;j++)
			a[0][i][0]=n+m;
		for(int i=0;i<=n+1;i++)
			a[i][m+1][0]=n+m;
		for(int i=0;i<=m+1;i++)
			a[n+1][i][0]=n+m;
		cout<<i<<" "<<j<<endl;
		int x;					
//		x=call(a,i,j,n,m);
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
				cout<<a[i][j][0]<<" ";
			cout<<endl;	
		}
	}
}

