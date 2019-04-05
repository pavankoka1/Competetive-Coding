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
		for(int i=1;i<=n;i++)
			cin>>a[i];
		int m=n/2;
		m++;
		int k=2;
		for(;;)
		{
			int tmp=a[m];
			for(int i=m;i>k;i--)
				a[i]=a[i-1];
			a[k]=tmp;	
			if(m==n)
				break;
			k+=2;
			m++;		
		}
		for(int i=1;i<=n;i++)
			cout<<a[i]<<" ";
		cout<<endl;		
	}
}

