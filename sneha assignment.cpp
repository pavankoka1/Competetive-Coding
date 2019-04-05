#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	string s;
	while(cin>>s)
	{
		bool ff=0;
		int x=0,i=0;
		vector <int> v;
		vector <int> c;
		int f;
		for(int i=0;i<s.size();i++)
		{
//			for(int k=0;k<v.size();k++)
//			cout<<v[k]<<" ";
//		cout<<endl;
//		for(int k=0;k<c.size();k++)
//			cout<<c[k]<<" ";
//		cout<<endl;
			x=0;
			while(((s[i]!='*' && s[i]!='/') && (s[i]!='-' && s[i]!='+')) && i<s.size())
			{
				x*=10;
				x+=s[i]-'0';
				i++;
			}
			v.push_back(x);
				if(s[i]=='/')
					f=4;
				if(s[i]=='*')
					f=3;
				if(s[i]=='+')
					f=1;
				if(s[i]=='-')
					f=2;	
			if(i<s.size() && c.size()>=1)
			{
				int j=c.size()-1;	
				while(f<c[j] && j>=0)
				{
					int p=v[v.size()-2],q=v[v.size()-1];
					v.pop_back();
					v.pop_back();
					if(c[j] == 4)
					{
						if(q==0)
						{
							ff=1;
							cout<<"undefined"<<endl;
							break;
						}
						p/=q;
					}
					if(c[j] == 3)
						p*=q;
					if(c[j] == 1)
						p+=q;
					if(c[j] == 2)
					{
						p-=q;
					}
					v.push_back(p);
					c.pop_back();
					j--;					
				}
				if(ff)
					break;
				c.push_back(f);	
			}
			if(c.size()==0)
				c.push_back(f);
		}
		if(ff)
			continue;
//		for(int i=0;i<v.size();i++)
//			cout<<v[i]<<" ";
//		cout<<endl;
//		for(int i=0;i<c.size();i++)
//			cout<<c[i]<<" ";
//		cout<<endl;			
		int j=c.size()-1;
		while(j>-1)
		{
			f=c[c.size()-1];
			int p=v[v.size()-2],q=v[v.size()-1];
			v.pop_back();
			v.pop_back();
			if(c[j] == 4)
			{
				if(q==0)
				{
					ff=1;
					cout<<"undefined"<<endl;
					break;
				}
					p/=q;
			}
			if(c[j] == 3)
				p*=q;
			if(c[j] == 1)
				p+=q;
			if(c[j] == 2)
			{
				p-=q;
			}
			v.push_back(p);
			c.pop_back();
			j--;
		}
		if(ff)
			continue;
		cout<<v[0]<<endl;
	}
}

