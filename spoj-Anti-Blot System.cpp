#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		string s1,s2,s3;
		char c1,c2;
		cin>>s1>>c1>>s2>>c2>>s3;
		cout<<s1<<c1<<s2<<c2<<s3;
		int l1=s1.length(),l2=s2.length(),l3=s3.length();
		for(int i=0;i<=l1-7;i++)
		{
			if(s1.substr(i,7)=="machula")
			{
				for(int j=0;j<l3;j++)
				{
					if(s3[j]-s2[j]<0)
					{
						s3[j+1]--;
						cout<<10+s3[j]-s2[j];
					}
					else
						cout<<s3[j]-s2[j];
				}
				cout<<" + "<<s2<<" = "<<s3<<endl;
				break;
			}
		}
		for(int i=0;i<=l2-7;i++)
		{
			if(s2.substr(i,7)=="machula")
			{
				cout<<s1<<" + ";
				for(int j=0;j<l3;j++)
				{
					if(s3[j]-s1[j]<0)
					{
						s3[j+1]--;
						cout<<10+s3[j]-s1[j];
					}
					else
						cout<<s3[j]-s1[j];
				}
				cout<<" = "<<s3<<endl;
				break;
			}
		}
		for(int i=0;i<=l3-7;i++)
		{
			if(s3.substr(i,7)=="machula")
			{
				cout<<s1<<" + "<<s2<<" = ";
				if(l1<l2)
				{
					l1=l1+l2;
					l2=l1-l2;
					l1=l1-l2;
				}
				for(int j=0;j<l1;j++)
				{
					if(j==l1-1)
					{
						if(s1[j]+s2[j]>9)
						cout<<(s1[j]+s2[j])%10<<(s1[j]+s2[j])/10;
						else
						cout<<s1[j]+s2[j];
						continue;
					}
					if(s1[j]+s2[j]>9)
					{
						s1[j+1]++;
						cout<<s1[j]+s2[j]-10;
					}
					else if(s1[j]+s2[j]<10)
						cout<<s1[j]+s2[j];
				}
				cout<<endl;
				break;
			}
		}
	}
	return 0;
}

