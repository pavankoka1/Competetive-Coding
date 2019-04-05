#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
	string s;
	while(cin>>s)
	{
		int a[105]={0};
		int l=s.length();
		for(int i=0;i<l;i++)
			a[l-1-i]=(int)s[i]-48;
//		cout<<a[0]<<" "<<a[1]<<" "<<endl;
		if(l==1 && a[0]==1)
		{
			cout<<"1"<<endl;
			continue;
		}
		for(int i=0;;i++)
		{
			if(a[i]==0)
				a[i]=9;
			
			else if(a[i]!=0)
			{
				a[i]--;
				break;
			}
		}
//		cout<<a[0]<<" "<<a[1]<<" "<<endl;
		for(int i=103;i>=0;i--)
		{
			if(a[i]!=0)
			{
				l=i+1;
				break;
			}
		}
		
//		for(int i=l-1;i>=0;i--)
//			cout<<a[i];
			
//		cout<<endl;	
//		cout<<l<<endl;
		int c=0;
		for(int i=0;i<l;i++)
		{
			a[i]*=2;
			a[i]+=c;
			if(a[i]>9)
			{
				c=a[i]/10;
				a[i]%=10;
			}
			else
				c=0;
		}
		if(c!=0)
			a[l]=c;
		for(int i=103;i>=0;i--)
		{
			if(a[i]!=0)
			{
				l=i+1;
				break;
			}
		}
		for(int i=l-1;i>=0;i--)
			cout<<a[i];
		
		cout<<endl;	
	}
}

