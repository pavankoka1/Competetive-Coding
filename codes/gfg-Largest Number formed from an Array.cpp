#include<bits/stdc++.h>
using namespace std;

int count(int x)
{
	int c=0;
	while(x>0)
	{
		x/=10;
		c++;
	}
	return c;
}
bool func(int a,int b)
{
	int p=pow(10,count(b))*a+b,q=pow(10,count(a))*b+a;
	return (p>q);
}
int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n,func);
		for(int i=0;i<n;i++)
			cout<<a[i];
		cout<<endl;	
	}
}

