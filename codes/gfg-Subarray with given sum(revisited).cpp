#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int n,s;
		cin>>n>>s;
		int p=0,q=0,x=0,a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		while(1==1)
		{
			if(x<s)
				x+=a[q++];
			if(x>s)
				x-=a[p++];
			if(x==s)
				break;		
		}
		cout<<p+1<<" "<<q<<endl;
	}
}

