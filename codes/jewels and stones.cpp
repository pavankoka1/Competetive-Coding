#include<iostream>
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		string j,s;
		cin>>j>>s;
		int l1,l2,c=0;
		l1=j.length();
		l2=s.length();
		
		for(int i=0;i<l2;i++)
		{
			for(int k=0;k<l1;k++)
			{
				if(s[i]==j[k])
				{
					c++;
					break;
				}
			}
		}
		cout<<c<<endl;
	}
	return 0;
}

