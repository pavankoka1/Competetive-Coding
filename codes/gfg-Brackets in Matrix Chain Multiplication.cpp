#include<bits/stdc++.h>
using namespace std;

int in[1000][1000];

void call(int l, int r)
{
	if(l>r)
		return;
	if(l==r)
	{
		char c=64+l;
		cout<<c;
	}
	else
	{
		cout<<"(";
		call(l,in[l][r]);
		call(in[l][r]+1,r);
		cout<<")";
	}
}
int main()
{
//	freopen("input.txt","r",stdin);
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
		
		for(int i=0;i<n;i++)
		{
			dp[i][i]=0;
//			in[i][i]=0;
		}
		for(int i=1;i<n-1;i++)
		{
			for(int j=1;j+i<=n-1;j++)
			{
				dp[j][j+i] = dp[j][j] + dp[j+1][j+i] + (a[0][j]*a[1][j])*a[1][j+i];
				in[j][j+i] = j;
				for(int k=j+1;k<=j+i;k++)
				{
					if((dp[j][k] + dp[k+1][j+i] + (a[0][j]*a[1][k])*a[1][j+i]) <= dp[j][j+i])
					{
						in[j][j+i] = k;
						dp[j][j+i] = dp[j][k] + dp[k+1][j+i] + (a[0][j]*a[1][k])*a[1][j+i];
					}
				}
			}
		}
		/*
		for(int i=1;i<n;i++)
		{
			for(int j=i;j<n;j++)
				cout<<in[i][j]<<" ";
				
			cout<<endl;	
		}
		*/
		call(1,n-1);
		cout<<endl;		
	}
}

