#include<iostream>
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,k;
		cin>>n>>x;
		int a[n],sum=0;
		
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum=sum+a[i];
		}
		k=a[0];
		for(int i=0;i<n;i++)
		{
			if(a[i]<k)
				k=a[i];
		}
		
		if(sum/x==(sum-k)/x)
			cout<<"-1"<<endl;
		else
			cout<<sum/x<<endl;	
		
		
	}
	return 0;
}

