#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int l;
		char s[100005];
		cin>>l;
		cin>>s;
		long long int n=0;
		for(long long int i=0;i<l;i++)
		{
			if(s[i]=='1')
				n++;
		}
		cout<<(n*(n+1))/2<<endl;
	}
}

