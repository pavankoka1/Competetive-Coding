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
		int a[n],m[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
			m[i]=a[i];	
		m[0]=a[0];
		for(int i=1;i<n;i++)
			for(int j=i-1;j>=0;j--)
				if(a[i]>a[j] && m[i]<m[j]+a[i])
					m[i]=m[j]+a[i];					
		cout<<*(std:: max_element(m, m + n))<<endl;				
	}
}

