#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		long long int n1;
		cin>>n1;
		long long int n=n1%1000007;
		long long int n2=n*(3*n+1)/2;
		n2=n2%1000007;
		cout<<n2<<endl;
	}
}

