#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n,count=0;
		cin>>n;
		int a[n+2],b[n+2];
		a[0]=0;b[0]=0;
		
		for(int i=1;i<=n;i++)
			cin>>a[i];
		for(int i=1;i<=n;i++)
			cin>>b[i];
		
		for(int i=1;i<=n;i++)
		{
			if(a[i]-a[i-1]>=b[i])
				count++;
		}		
		cout<<count<<endl;
	}
}
