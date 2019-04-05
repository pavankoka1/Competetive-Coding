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
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int i=0,j=0,x=0;
		while(x!=s && i<n)
		{
			if(j<n)
				x+=a[j++];
			if(x>s || j==n)
			{
				x-=a[i++];
				while(x>s)
				{
					x-=a[j-1];
					j--;
				}
			}	
//			cout<<i<<" "<<j<<endl;	
		}
//		int xx=0;
//		for(int i=19;i<37;i++)
//			xx+=a[i];
//		cout<<s<<" "<<xx<<endl;	
//		cout<<i<<" "<<j<<endl;
		if(x==s)
			cout<<++i<<" "<<j<<endl;
		else 
			cout<<"-1"<<endl;		
	}
}

