#include<iostream>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	
	while(t--)
	{
		int m,x,y,a[105]={0},sum=0;
		cin>>m>>x>>y;
		int b[m];
		
		for(int i=0;i<m;i++)
			cin>>b[i];
		
		for(int i=0;i<m;i++)
		{
			
			if(b[i]-x*y<=0)
			{
				for(int j=1;j<b[i];j++)
					a[j]=1;
			}
			
			if(b[i]-x*y>0)
			{
					for(int j=b[i]-x*y;j<b[i];j++)
						a[j]=1;
			}
			
			if(b[i]+x*y>100)
			{
				for(int j=b[i];j<101;j++)
					a[j]=1;
			}
			
			if(b[i]+x*y<=100)
			{
				for(int j=b[i];j<=b[i]+x*y;j++)
					a[j]=1;
			}
		}
		
		for(int i=1;i<101;i++)
		{
			if(a[i]==0)
				sum++;
		}
		
		cout<<sum<<endl;	
	}
}
