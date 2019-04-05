#include<bits/stdc++.h>
using namespace std;

int check(string s1,string s2)
{
	int c=0;
	for(int i=0;i<s1.length()&&s2.length();i++,c++)
		if(s1[i]!=s2[i])
			break;	
	return c;		
}
int call(string s[],string p,int l,int r)
{
//	cout<<" "<<l<<" "<<r<<endl;
	if(l==r)
		return check(s[l],p);	
	if(r==l+1)
	{
//		cout<<s[l]<<" "<<s[r]<<endl;
		int c1=check(s[l],p),c2=check(s[r],p);
//		cout<<c1<<" "<<c2<<endl;
		if(c1<=c2)
			return c2;
		else
			return c1;	
	}				
	int m=(l+r)/2,c;
	c=s[m].compare(p);
	if(c<=0)
		call(s,p,m,r);
	else
		call(s,p,l,m);					
}
int find(string s[],int c,int l,int r,string p)
{
	cout<<" "<<l<<" "<<r<<endl;
	if(l==r)
		return l;
	if(r==l+1)
	{
		int c1=check(s[l],p),c2=check(s[r],p);
//		cout<<" "<<c1<<" "<<c2<<endl;
		if(c1>=c2)
			return l;
		if(c2>c1)
			return r;
	}	
	int m=(l+r)/2;
	if(s[m].compare(p)<0)
		find(s,c,m,r,p);
	else
		find(s,c,l,m,p);	
}
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
		int r;
		string p;
		cin>>r>>p;
		int c=call(s,p,0,r-1);
//		cout<<check(p,s[0])<<endl;
		cout<<s[find(s,c,0,r-1,p)]<<" "<<p<<endl;
	}
}

