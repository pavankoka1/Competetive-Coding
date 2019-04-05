#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
	while(true)
	{
		int a,b;
		cin>>a>>b;
		if(a==-1 && b==-1)
			break;
		if(a==0)
		{
			cout<<b<<endl;
			continue;
		}
		if(b==0)
		{
			cout<<a<<endl;
			continue;
		}
		if(b<a)
		{
			b=a+b;
			a=b-a;
			b=b-a;
		}
		a++;
		int c=b/a;
		if(b%a!=0)
			c++;
		cout<<c<<endl;		
	}
}

