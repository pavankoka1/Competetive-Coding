#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if((n+3)%4==0)
			cout<<"ALICE"<<endl;
		else
			cout<<"BOB"<<endl;	
	}
	return 0;
}

