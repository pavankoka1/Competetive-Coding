#include<bits/stdc++.h>
using namespace std;

long long int gcd(long long int a,long long int b)
{
	if(a==0)
		return b;
	return (gcd(b%a,a));
}
int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		long long int a,b;
		long long int g,l;
		
		cin>>a>>b;
		
		if(b<a)
			swap(a,b);
		
		g = gcd(a,b);
		l = (a*b)/g;
		cout<<g<<" "<<l<<endl;
	}
	return 0;
}


/*
3 
120 11
10213 312
10 3
*/
