#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int a[27][1],p=0.,c=0,m=0;
		for(int i=0;i<=26;i++)
		{
			a[i][0]=0;
			a[i][1]=0;
		}
		for(int i=0;i<s.length();i++)
		{
//			cout<<(int)s[i]-96<<endl;
			if(a[(int)s[i]-97][0]==0)
			{
				a[(int)s[i]-97][0]=1;
				a[(int)s[i]-97][1]=i;
				c++;
				m=max(m,c);
			}
			else
			{
				int x=a[(int)s[i]-97][1];
				cout<<x<<endl;
				cout<<(int)s[i]-97<<endl;
				c++;
				for(int j=p;j<=x;j++)
				{
					a[(int)s[j]-97][0]=0;
					c--;
//					cout<<c<<" "<<x<<endl;
				}
				p=x+1;
				a[(int)s[i]-97][1]=i;
			}
			cout<<c<<" "<<p<<" "<<" "<<a[(int)s[i]-97][0]<<" "<<a[(int)s[i]-97][1]<<endl;
		}
		cout<<m<<endl;
	}
}

