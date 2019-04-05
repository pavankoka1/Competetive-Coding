#include<bits/stdc++.h>
#define M  10000009
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		long long int val=1;
		bool flag=false;
		for(int i=0;i<s.length()/2;i++)
		{
			if(s[i]=='?'&&s[s.length()-1-i]=='?')
				val=(val*26)%M;
			if(s[i]!='?'&&s[s.length()-1-i]!='?')
			{
				if(s[i]!=s[s.length()-1-i])
					flag=true;
			}	
		}
		if(s.length()%2!=0&&s[s.length()/2]=='?')
			val=(val*26)%M;
		if(flag)
			cout<<"0"<<endl;
		else
			cout<<val<<endl;	
	}
}

