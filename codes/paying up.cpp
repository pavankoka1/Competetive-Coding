#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,count,i,j;
		cin>>n>>k;
		int a[25]={0},b[25]={0};
		
		for(i=1;i<=n;i++)
			cin>>a[i];
		
		for(i=1;i<=pow(2,n);i++)
		{
			count=i;
			
			for(j=1;j<=n;j++)
			{
				b[j]=count%2;
				count=count/2;
			}
			count=0;
			for(j=1;j<=n;j++)
			{
				if(b[j]==1)
					count=count+a[j];
			}
			if(count==k)
			{
				cout<<"Yes"<<endl;
				break;
			}
			if(i==pow(2,n))
				cout<<"No"<<endl;
		}
	}
	return 0;
}

