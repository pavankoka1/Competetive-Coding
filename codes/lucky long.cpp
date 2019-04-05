#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
	int n;
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		int l=s.length(),c=0;
		for(int i=0;i<l;i++)
		{
//			cout<<s[i]<<endl;
			if(s[i]=='4' || s[i]=='7')
				continue;
			else
				c++;	
		}
		cout<<c<<endl;		
	}
}

