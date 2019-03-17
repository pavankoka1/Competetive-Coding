#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int l=s.length();
		int sum=1;
//		cout<<sum<<endl;
		for(int i=0;i<l-1;i++)
		{
			if(s[i+1]>=s[i])
				sum+=(s[i+1]-s[i]);
			else
				sum+=('z'-'a'+1-s[i]+s[i+1]);
//			cout<<sum<<endl;		
		}
		if(sum>10*l)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;	
	}
}
