#include<bits/stdc++.h>
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
		int a=0,b=0,c=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i] == 'a')
				a=2*a+1;
			else if(s[i] == 'b')
				b=2*b+a;
			else if(s[i] == 'c')
				c=2*c+b;		
		}
		cout<<c<<endl;
	}
}

