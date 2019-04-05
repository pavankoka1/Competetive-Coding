#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
	int n,t;
	cin>>n>>t;
	string subs,c,s[50];
	for(int i=0;i<n;i++)
		cin>>s[i];
	
	for(int i=0;i<t;i++)
	{
		int flag=0;
		cin>>c;
		if(c.length()>=47)
			flag=1;
		for(int j=0;j<n;j++)
		{
			if (c.find(s[j])!=string::npos)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			cout<<"Good"<<endl;
		else
			cout<<"Bad"<<endl;	
	}
}

