#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[n+5][m+5],b[n+5][m+5];
		string s;
		for(int i=1;i<=n;i++)
		{
			cin>>s;
			for(int j=1;j<=m;j++)
			{
				if(s[j-1]=='0')
					a[i][j]=0;
				else
					a[i][j]=1;	
//				cout<<a[i][j]<<" ";		
			}
//			cout<<s<<endl;
//			cout<<endl;
		}
/*		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
				cout<<a[i][j]<<" ";
			cout<<endl;	
		}		
*/		
		for(int i=0;i<=n+1;i++)
		{
			for(int j=0;j<=m+1;j++)
			{
//				cout<<i<<" "<<j<<endl;
				if(i==0 || j==0)
				{
					b[i][j]=m;
					continue;
				}
				if(i==n+1 || j==m+1)
				{
					b[i][j]=m;
					continue;
				}
				
				if(a[i][j]==1)
				{
					b[i][j]=0;
					continue;
				}
				else if(a[i][j]==0)
					b[i][j]=m;
			}
		}
/*		
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
				cout<<a[i][j]<<" ";
			cout<<endl;	
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
				cout<<b[i][j]<<" ";
			cout<<endl;	
		}
*/		
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				if(b[i][j]==0)
					continue;
				b[i][j]=min(b[i][j],(min(b[i+1][j],min(b[i-1][j],min(b[i][j+1],b[i][j-1])))+1));
//				b[i][j]=(min(b[i+1][j],min(b[i-1][j],min(b[i][j+1],b[i][j-1])))+1);
			}
		}
		for(int i=n;i>0;i--)
		{
			for(int j=m;j>0;j--)
			{
				if(b[i][j]==0)
					continue;
				b[i][j]=min(b[i][j],(min(b[i+1][j],min(b[i-1][j],min(b[i][j+1],b[i][j-1])))+1));
//				b[i][j]=(min(b[i+1][j],min(b[i-1][j],min(b[i][j+1],b[i][j-1])))+1);
			}
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
				cout<<b[i][j]<<" ";
			cout<<endl;	
		}
//		cout<<endl;
	}
}

