#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int l,count=0;
		cin>>l;
		for(int i=0;i<l;i++)
		{
			long long int j;
			cin>>j;
			count=count+j;
			if(count>=l)
				count=count%l;
		}
		if(count==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;			
	}
	return 0;
}

