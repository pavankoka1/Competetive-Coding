#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
	while(1!=0)
	{
		string str;
		cin>>str;
		int l=str.length();
		int s[l],flag=0;
		long long int f[5005];
		f[0]=1;
		f[1]=1;
		for(int i=0;i<l;i++)
			s[i]=int(str[i])-48;
		if(s[0]==0)
			break;	
		long long int c=1;
		for(int i=1;i<l;i++)
		{
			if(s[i]==0 && s[i-1]>2)
			{
				cout<<"0"<<endl;
				flag=1;
				break;
			}
			if(s[i]==0 && s[i-1]==0)
			{
				cout<<"0"<<endl;
				flag=1;
				break;
			}
		}
		if(flag==1)
			continue;
		for(int i=0;i<l;i++)
		{
			if(i!=0 && s[i]==0)
			{
				s[i]=-1;
				s[i-1]=-1;
			}
			if(s[i]>6 && s[i-1]>1)
				s[i]=-1;
		}
		int j=0;
		for(int i=0;i<l;i++)
		{
			f[j+2]=f[j+1]+f[j];
			if(s[i]!=-1)
			{
				j++;
				if(s[i]>2)
				{
					c*=f[j];
					j=0;
				}
			}
			if(s[i]==-1 || i==l-1)
			{
				c*=f[j];
				j=0;
			}
		}	
		cout<<c<<endl;		
	}
}
