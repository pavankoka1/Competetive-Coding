#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		long long int n,k,c=0;
		cin>>n>>k;
		
		long long int t,a[n];
		
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]<=k)
			{
				c=c+k-a[i];
				continue;
			}
			
			t=a[i]%k;
			
            if(t>k/2)
				c=c+k-t;
			else
				c=c+t;	
		}	
		
		cout<<c<<endl;
	}
}
