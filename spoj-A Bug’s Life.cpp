#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
	int t;
	scanf("%d",&t);
	for(int tt=1;tt<=t;tt++)
	{
		int n,c;
		scanf("%d%d",&n,&c);
		int a[n+5][n+5];
		int co[n+2];
		int flag=0;
		memset(co,0,sizeof co);
		for(int i=0;i<=n;i++)
			a[i][0]=0;
		while(c--)
		{
			int i,j;
			scanf("%d%d",&i,&j);
			if(i>j)
				swap(i,j);
			a[i][0]++;
			a[i][a[i][0]]=j;				
		}
		for(int i=1;i<=n;i++)
		{
//			cout<<i<<endl;
			if(a[i][0]==0)
				continue;
			if(flag==1)
				break;
			int set=0;
			if(co[i]==0)
			{
				for(int j=1;j<=a[i][0];j++)
				{
					if(co[a[i][j]]!=0)
					{
						set=co[a[i][j]];
						break;
					}
				}
				if(set==0)
				{
					co[i]=1;
					for(int j=1;j<=a[i][0];j++)
						co[a[i][j]]=2;
				}
				if(set==1)
				{
					co[i]=2;
					for(int j=1;j<=a[i][0];j++)
					{
						if(co[a[i][j]]==2)
							flag=1;
						else
							co[a[i][j]]=1;	
					}					
				}
				if(set==2)
				{
					co[i]=1;
					for(int j=1;j<=a[i][0];j++)
					{
						if(co[a[i][j]]==1)
							flag=1;
						else
							co[a[i][j]]=2;	
					}					
				}
			}
			else if(co[i]==1)
			{
				for(int j=1;j<=a[i][0];j++)
				{
					if(co[a[i][j]]==1)
						flag=1;
					else
						co[a[i][j]]=2;	
				}
			}
			else if(co[i]==2)
			{
				for(int j=1;j<=a[i][0];j++)
				{
					if(co[a[i][j]]==2)
						flag=1;
					else
						co[a[i][j]]=1;	
				}
			}
		}
		if(flag!=0)
		{
			printf("Scenario #");
			printf("%d",tt);
			printf(":\n");
			printf("Suspicious bugs found!\n");
		}
		else
		{
			printf("Scenario #");
			printf("%d",tt);
			printf(":\n");
			printf("No suspicious bugs found!\n");
		}		
	}
}
