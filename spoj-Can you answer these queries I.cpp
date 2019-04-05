#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	int m,n;
	scanf("%d",&n);
	int a[50005];
	for(int i=1;i<n+1;i++)
		scanf("%d",&a[i]);
	scanf("%d",&m);
	while(m--)
	{
		int xi,yi;
		scanf("%d",&xi);
		scanf("%d",&yi);
		int c=a[xi];
		for(int i=xi;i<=yi;i++)
		{
			int x=0;
			for(int j=i;j<=yi;j++)
			{
				x=x+a[j];
				if(x>c)
					c=x;
			}
		}
		printf("%d",c);
		printf("\n");
	}
}

