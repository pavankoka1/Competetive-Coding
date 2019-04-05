#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	string s[t];
	for(int i=0;i<t;i++)
		cin>>s[i];
	sort(s,s+t);
	for(int i=0;i<t;i++)
		cout<<s[i]<<" ";
	cout<<endl;		
	int q;
	cin>>q;
	while(q--)
	{
		int r,max=-1,strn=-1;
		string p;
		cin>>r>>p;
		for(int i=0;i<r;i++)
		{
			int c=0;
			for(int j=0;j<s[i].length()&&p.length();j++)
			{
				if(s[i][j]==p[j])
					c++;
				else
					break;	
			}
			if(c>max)
			{
				max=c;
				strn=i;
			}
			else if(c==max)
			{
				if(s[i].compare(s[strn])<0)
					strn=i;
			}
		}
		cout<<s[strn]<<endl;
	}
	return 0;	
}

