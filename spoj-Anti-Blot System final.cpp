#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
	int n;
	cin>>n;
	while(n--)
	{
		string s1,s2,s3,c1,c2;
		cin>>s1>>c1>>s2>>c2>>s3;
		int flag=0,a=0,b=0,c=0,l1=s1.length(),l2=s2.length(),l3=s3.length();
		for(int i=0;i<l1;i++)
			a=10*a+(int)s1[i]-48;
		for(int i=0;i<l2;i++)
			b=10*b+(int)s2[i]-48;
		for(int i=0;i<l3;i++)
			c=10*c+(int)s3[i]-48;
		for(int i=0;;i++)
		{
			if((int)s1[i]==109)
			{
				flag=1;
				break;
			}
			if((int)s2[i]==109)
			{
				flag=2;
				break;
			}
			if((int)s3[i]==109)
			{
				flag=3;
				break;
			}
		}
		if(flag==1)
			cout<<c-b<<" + "<<b<<" = "<<c;
		if(flag==2)
			cout<<a<<" + "<<c-a<<" = "<<c;
		if(flag==3)
			cout<<a<<" + "<<b<<" = "<<a+b;	
	}
}

