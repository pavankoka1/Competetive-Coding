#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int n,c=0,a[100005]={0},b[100005]={0};
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			b[a[i]]=1;
		}
		for(int i=0;i<100001;i++)
			if(b[i]==1)
				c++;
		cout<<c<<endl;		
	}
	return 0;
}

