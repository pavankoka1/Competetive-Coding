#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
	int n;
	cin>>n;
	while(n--)
	{
		string s1,s2,s3;
		char c1,c2;
		cin>>s1>>c1>>s2>>c2>>s3;
		int flag=0;
		for(int i=0;i<s1.length();i++)
		{
			if((int)s1[i]==109)
			{
				flag=1;
				break;
			}
		}
		for(int i=0;i<s2.length();i++)
		{
			if((int)s2[i]==109)
			{
				flag=2;
				break;
			}
		}
		for(int i=0;i<s3.length();i++)
		{
			if((int)s3[i]==109)
			{
				flag=3;
				break;
			}
		}
		int l1=s1.length(),l2=s2.length(),l3=s3.length();
		int a[200]={0};		
		int a1[200]={0},a2[200]={0},a3[200]={0};
		for(int i=0;i<l1;i++)
			a1[l1-1-i]=(int)s1[i]-48;
		for(int i=0;i<l2;i++)
			a2[l2-1-i]=(int)s2[i]-48;
		for(int i=0;i<l3;i++)
			a3[l3-1-i]=(int)s3[i]-48;	
//		cout<<a2[4]<<a2[3]<<a2[2]<<a2[1]<<a2[0]<<endl;
//		cout<<a3[4]<<a3[3]<<a3[2]<<a3[1]<<a3[0]<<endl;		
		if(flag==1)
		{
			for(int i=0;i<l3;i++)
			{
				if(a3[i]>=a2[i])
					a[i]=a3[i]-a2[i];
				else
				{
					a3[i+1]=a3[i+1]-1;
					a[i]=a3[i]+10-a2[i];
				}
			}
			int l=0;
			for(int i=197;;i--)
			{
				if(a[i]!=0)
				{
					l=i;
					break;
				}
			}
//			cout<<a[4]<<a[3]<<a[2]<<a[1]<<a[0]<<endl;
//			cout<<a3[4]<<a3[3]<<a3[2]<<a3[1]<<a3[0]<<endl;
//			cout<<l<<endl;
			for(int i=l;i>=0;i--)
				cout<<a[i];
			cout<<c1;
			for(int i=l2-1;i>=0;i--)
				cout<<a2[i];
			cout<<c2;	
			for(int i=l3;i>0;i--)
				cout<<s3[l3-i];
			cout<<endl;			
		}
		if(flag==2)
		{
			for(int i=0;i<l3;i++)
			{
				if(a3[i]>=a1[i])
					a[i]=a3[i]-a1[i];
				else
				{
					a3[i+1]=a3[i+1]-1;
					a[i]=a3[i]+10-a1[i];
				}
			}
			int l=0;
			for(int i=197;;i--)
			{
				if(a[i]!=0)
				{
					l=i;
					break;
				}
			}
//			cout<<a[4]<<a[3]<<a[2]<<a[1]<<a[0]<<endl;
//			cout<<a3[4]<<a3[3]<<a3[2]<<a3[1]<<a3[0]<<endl;
//			cout<<l<<endl;
			for(int i=l1-1;i>=0;i--)
				cout<<a1[i];
			cout<<c1;
			for(int i=l;i>=0;i--)
				cout<<a[i];	
			cout<<c2;	
			for(int i=l3;i>0;i--)
				cout<<s3[l3-i];
			cout<<endl;			
		}
		if(flag==3)
		{
			for(int i=0;i<l1+l2;i++)
			{
				a[i]=a[i]+a1[i]+a2[i];
				if(a[i]>9)
				{
					a[i]=a[i]-10;
					a[i+1]=1;
				}
			}
//			cout<<a1[0]<<a1[1]<<endl;
//			cout<<a2[0]<<a2[1]<<endl;
			int l=0;
			for(int i=197;;i--)
			{
				if(a[i]!=0)
				{
					l=i;
					break;
				}
			}
			for(int i=l1-1;i>=0;i--)
				cout<<a1[i]<<" ";
			cout<<c1<<" ";
			for(int i=l2-1;i>=0;i--)
				cout<<a2[i]<<" ";	
			cout<<c2<<" ";
			for(int i=l;i>=0;i--)
				cout<<a[i];	
			cout<<endl;	
		}
	}
	return 0;
}

