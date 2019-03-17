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
		int l=s.length();
		int d=0,j=0;
		for(int i=0;i<l;)
		{
			int dj=0;
			if(s[i]=='.')
			{
				for(;i<l;)
				{
					dj++;
					i++;
					if(s[i]=='#')
					{
						if(dj>j)
						{
							j=dj;
							d++;
						}
						break;
					}
				}
			}
			else
				i++;
		}
		cout<<d<<endl;
	}
}

