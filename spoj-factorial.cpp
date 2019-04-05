#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int a,c=0;
		cin>>a;
		for(int i=1;pow(5,i)<=a;i++)
			c=c+a/pow(5,i);
		cout<<c<<endl;	
	}
	return 0;
}

