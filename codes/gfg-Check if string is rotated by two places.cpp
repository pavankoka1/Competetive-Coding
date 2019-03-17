#include<bits/stdc++.h>
using namespace std;

string rl(string s){
	string ans=s;
	int n=s.length();
	for(int i=0;i<n-1;i++)
		ans[i]=s[i+1];
	ans[n-1]=s[0];
	return ans;	
}

string rr(string s){
	string ans=s;
	int n=s.length();
	for(int i=1;i<n;i++)
		ans[i]=s[i-1];
	ans[0]=s[n-1];
	return ans;	
}
int main()
{
//	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		string s,ss,s1,s2,s3,s4;
		cin>>s>>ss;
		s1=rr(s);
		s2=rr(s1);
		s3=rl(s);
		s4=rl(s3);
		if((s1==ss || s2==ss) || (s3==ss || s4==ss))
			cout<<"1"<<endl;
		else
			cout<<"0"<<endl;	
	}
}

