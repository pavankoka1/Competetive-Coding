#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int m,n,x;
		cin>>m>>n;
		bool flag=1;
		int a[m][n],tmp[m][n];
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
				cin>>a[i][j];
		cin>>x;		
		for(int i=0;i<m;i++)
		{
			if(i%2==0)
			{
				for(int j=0;j<n;j++)
				{
					tmp[i][(j+x)%n]=a[i][j];
//				cout<<i<<" "<<(j+x)%n<<endl;
					}	
			}
			else
			{
				for(int j=0;j<n;j++)
				{
					tmp[i][j]=a[i][(j+x)%n];
//					cout<<i<<" "<<(j+x)%n<<endl;
				}
			}	
		}
		for(int i=0;i<m;i++)
		{
				for(int j=0;j<n;j++)
			{
				if(tmp[i][j]!=a[i][j])
				{
					flag=0;
					break;
				}
			}
		}
		cout<<flag<<endl;				
	}
}

