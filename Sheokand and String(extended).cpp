#include<bits/stdc++.h>
using namespace std;

int check(string s1,string s2)
{
	int c=0;
	for(int i=0;i<s1.length() && i<s2.length();i++)
		if(s1[i]!=s2[i])
			break;
	return c;		
}
int call(string s[],string p,int l,int r)
{
	if(l==r)
		return l;
	if(r==(l+1))
	{
		if(check(s[l],p)>check(s[r],p))
			return l;
		else
			return r;	
	}
	int m=(l+r)/2;
	if(s[m].compare(p)<0)
		return call(s,p,m,r);
	else
		return call(s,p,l,m);		
}
int main()
{
	freopen("input.txt","r",stdin);
	int n;
	cin>>n;
	string s[n];
	for(int i=0;i<n;i++)
		cin>>s[i];
	sort(s,s+n);
	int q;
	cin>>q;
	while(q--)
	{
		int r;
		string p;
		cin>>r>>p;
		int c=call(s,p,0,n-1);
		cout<<s[c]<<endl;
	}	
}

