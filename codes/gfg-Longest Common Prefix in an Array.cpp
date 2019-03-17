#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{	
		int n;
		cin>>n;
		string s[n];
		for(int i=0;i<n;i++)
			cin>>s[i];
		int x=-1;
		for(int i=0;i<min(s[0].length() && s[1].length()) && s[0][i]==s[1][i];i++)
			x++;
		int p=x;	
		for(int i=2;i<n;i++)
		{
			for(int j=0;i<x;j++)
			{
				if(s[0][j]!=s[i][j])
				{
					p=j-1;
					break;
				}
			}
			x=p;
		}
		if(x==-1)
			cout<<"-1"<<endl;
		else
			cout<<s[0].substr(0,x)<<endl;
	}
}

