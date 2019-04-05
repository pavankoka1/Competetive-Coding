#include<bits/stdc++.h>
using namespace std;
int a[16][16];
int check(int n1,int n2)
{
	if(a[n1][n2]==1)
		return 1; 
}
int func(int n1,int c,int n2)
{
	cout<<n1<<" "<<c<<" "<<endl;
	if(check(c,n2))
	{
		cout<<c<<" "<<n2<<endl;
	}
	for(int i=1;i<=15;i++)
	{
		if(a[c][i]==1)
		{
			return func(c,i,n2);
			break;
		}
	}
}
int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		for(int i=1;i<=15;i++)
		{
			for(int j=1;j<=15;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		int n1,n2;
		cin>>n1>>n2;
		if(a[n1][n2]==1)
		{
			cout<<"hop count is 1"<<endl;
		}
		else
		{
			for(int i=1;i<=15;i++)
			{
				if(i==n1)
					continue;
				else
				{
					if(a[n1][i]==1)
					{
						func(n1,i,n2);
					}
				}	
			}
		}
	}
}
/*int check(int n1,int n2)
{
	if(a[n1][n2]==1)
		return 1; 
}
int func(int n1,int c,int n2)
{
	cout<<n1<<" "<<c<<" "<<endl;
	if(check(c,n2))
	{
		cout<<c<<" "<<n2<<endl;
	}
	for(int i=1;i<=15;i++)
	{
		if(a[c][i]==1)
		{
			return func(c,i,n2);
			break;
		}
	}
}
*/
