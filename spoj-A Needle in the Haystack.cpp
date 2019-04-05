#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	int l,brk=0;
	string s,s1,s2;
	while(scanf("%d\n",&l)!=EOF)
	{
		brk=0;
		cin>>s1>>s;
//		cout<<s.length()<<" "<<l<<endl;
		if(s.length()<l)
		{
			cout<<endl;
			continue;
		}
		for(int i=0;i<=s.length()-l;i++)
		{
			s2=s.substr(i,l);
			if(s1==s2)
			{
				cout<<i<<endl;
				brk++;
			}
		}
		if(brk==0)
			cout<<endl;
	}
}

