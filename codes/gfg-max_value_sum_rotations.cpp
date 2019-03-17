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
		int a[n],s=0,x=0;
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
			s+=a[i];
		for(int i=0;i<n;i++)
			x+=i*a[i];
		int cal=x;	
		for(int i=n-1;i>=0;i--)
		{
//			cout<<cal<<endl;
			cal+=s-n*a[i];
			if(cal>x)
				x=cal;
		}
		cout<<x<<endl;			
	}
}

