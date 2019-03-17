#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int a,l;
		string s;
		cin>>a>>s;
		l=s.length();
		int b[l],c1=0,c2=0;
		for(int i=0;i<l;i++)
			b[i]=(int)s[i]-48;
		
		for(int i=a;i>0;i--)
		{
			c1=0,c2=0;
			c1=a%i;
			for(int j=0;j<l;j++)
				c2=(c2*10+b[j])%i;
			
			if(c1==0&&c2==0)
			{
				cout<<i<<endl;
				break;
			}	
		}	
	}
	return 0;
}

