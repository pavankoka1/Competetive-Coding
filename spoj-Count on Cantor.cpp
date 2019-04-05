#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int n,in=0,c=0;
		bool flag=0;
		cin>>n;
		for(int i=1;;)
		{
			c=0;
			for(int j=0;j<=i/2;j++)
			{
//				cout<<in<<endl;
				in++;
				c++;
				if(in==n)
				{
					flag=1;
					cout<<"TERM "<<n<<" IS "<<c<<"/";
					break;
				}
			}
			if(flag==1)
				break;
			for(int j=i/2+1;j<i;j++)
			{
				c--;
				in++;
				if(in==n)
				{
					flag=1;
					cout<<"TERM "<<n<<" IS "<<c<<"/";
					break;
				}
			}
			if(flag==1)
				break;	
			
			i=i+4;	
		}
		in=0;
		flag=0;
		for(int i=3;;)
		{
			c=0;
			for(int j=0;j<=i/2;j++)
			{
				in++;
				c++;
				if(in==n)
				{
					flag=1;
					cout<<c<<endl;
					break;
				}
			}
			if(flag==1)
				break;
			for(int j=i/2+1;j<i;j++)
			{
				in++;
				c--;
				if(in==n)
				{
					flag=1;
					cout<<c<<endl;
					break;
				}
			}
			if(flag==1)
				break;
			
			i=i+4;		
		}
	}
}

