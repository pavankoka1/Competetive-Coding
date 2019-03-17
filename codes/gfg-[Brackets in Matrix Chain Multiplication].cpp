#include<bits/stdc++.h>
using namespace std;
int in[1000][1000];
void bra(int l,int r)
{
	if(l==r)
	{
		char c=64+l;
		cout<<c;
	}
	else
	{
		cout<<"(";
		bra(l,in[l][r]);
		bra(in[l][r]+1,r);
		cout<<")";
	}
}
int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[2][n];
		for(int i=1;i<=n;i++)
			cin>>a[0][i];
		for(int i=1;i<n;i++)
			a[1][i]=a[0][i+1];
		int dp[n][n];
		for(int i=1;i<n;i++)
			dp[i][i]=0;
/*		for(int i=0;i<2;i++)
		{
			for(int j=1;j<n;j++)
				cout<<a[i][j]<<" ";
			cout<<endl;	
		}
*/			
		for(int ii=1;ii<n;ii++)
		{
			for(int i=1;i<n-ii;i++)
			{
				int j=i+ii;
				for(int k=i;k<j;k++)
				{
					if(k==i)
					{
						dp[i][j]=dp[i][k]+dp[k+1][j]+a[0][i]*(a[1][k]*a[1][j]);
						in[i][j]=k;
					}
					else
					{
						if((dp[i][k]+dp[k+1][j]+a[0][i]*(a[1][k]*a[1][j]))<=dp[i][j])
						{
							dp[i][j]=dp[i][k]+dp[k+1][j]+a[0][i]*(a[1][k]*a[1][j]);
							in[i][j]=k;
						}
					}
//					cout<<i<<" "<<j<<" "<<k<<" "<<dp[i][k]+dp[k+1][j]+a[0][i]*(a[1][k]*a[1][j])<<" "<<dp[i][j]<<endl;
				}
			}
		}
/*		for(int i=1;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
				cout<<in[i][j]<<" ";
			cout<<endl;	
		}
*/
		bra(1,n-1);
		cout<<endl;
//		cout<<dp[1][n-1]<<endl;				
	}
}

