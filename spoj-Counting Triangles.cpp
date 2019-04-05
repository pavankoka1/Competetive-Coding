#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		cout<<(n*(n+2)*(2*n+1))/8<<endl;
	}
}

