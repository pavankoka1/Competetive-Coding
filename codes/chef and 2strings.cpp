#include<iostream>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	
	while(t--)
	{
		string s1,s2;
		cin>>s1>>s2;
		int l;
		l=s1.length();
		int s=0,c1=0,c2=0,x=0;
		
		for(int i=0;i<l;i++)
		{
			if(s1[i]=='?'&&s2[i]=='?')
				x++;
				
			if(s1[i]=='?')
				c1++;
				
			if(s2[i]=='?')
				c2++;
		}

		if(c2>c1)
		{
			c1=c1+c2;
			c2=c1-c2;
			c1=c1-c2;
		}
		
		for(int i=0;i<l;i++)
		{
			if(s1[i]=='?')
				continue;
			
			if(s2[i]=='?')
				continue;
				
			if(s1[i]!=s2[i])
				s++;
		}
		cout<<s<<" "<<s+c1+c2-x<<endl;
	}
}
/*
3
a?c
??b
???a
???a
?abac
aba?w
*/
