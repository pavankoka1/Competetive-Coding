#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		for(int i=0;i<n;)
		{
			if(i!=n-1)
			swap(a[i],a[i+1]);
			i+=2;
		}	
/*		for(int i=0;i<n-1;i++)
		{
			if(i%2==0)
				if(a[i+1]>a[i])
					swap(a[i+1],a[i]);
			
			if(i%2!=0)
				if(a[i+1]<a[i])
					swap(a[i+1],a[i]);		
		}
*/		
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<endl;		
	}
}

