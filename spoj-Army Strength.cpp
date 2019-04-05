#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int a[100000],b[100000],n1,n2,m1=0,m2=0;
		cin>>n1>>n2;
		for(int i=0;i<n1;i++)
		{
			cin>>a[i];
			if(a[i]>m1)
				m1=a[i];
		}
		for(int i=0;i<n2;i++)
		{
			cin>>b[i];
			if(b[i]>m2)
				m2=b[i];
		}	
		if(m1>=m2)
			cout<<"Godzilla"<<endl;
		else
			cout<<"MechaGodzilla"<<endl;		
	}
}

