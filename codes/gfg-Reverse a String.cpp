#include<bits/stdc++.h>
using namespace std;
string s;
void swap(int l,int r)
{
	char c=s[l];
	s[l]=s[r];
	s[r]=c;
}
int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		cin>>s;
		int n=s.length();
		for(int i=0;i<=n/2;i++)
			swap(i,n-1-i);
		cout<<s<<endl;	
	}
}

