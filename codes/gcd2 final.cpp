#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	if(a==0)
		cout<<b<<endl;
	else
		gcd(b%a,a);
	return 0;		
}
int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int a,b=0,c[300]={0},l;
		string s;
		cin>>a>>s;
		
		l=s.length();
		
		for(int i=0;i<l;i++)
			c[i]=(int)s[i]-48;
			
		for(int i=0;i<l;i++)
			b=(b*10+c[i])%a;
				
		if(b==0)
			cout<<a<<endl;
		else
			gcd(b,a);	
			
	}
	return 0;
}

