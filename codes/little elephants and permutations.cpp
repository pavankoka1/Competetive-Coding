#include<iostream>
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int n,c1=0,c2=0;
		cin>>n;
		int a[n];
		
		for(int i=0;i<n;i++)
			cin>>a[i];
		
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
					c1++;
			}
		}
		
		for(int i=1;i<n;i++)
		{
			if(a[i]<a[i-1])
				c2++;
		}	 
		
		if(c1==c2)
			cout<<"YES"<<endl;
			
		else
			cout<<"NO"<<endl;		
	}
	return 0;
}

