#include<bits/stdc++.h>
using namespace std;
long long int count(int a[],int n)
{
	if(n<1000000 && a[n]!=0)
		return a[n];
	else
	{
		if(n/2+n/3+n/4>n)
		{
			if(n<1000000)
			{
				a[n]=count(a,n/2)+count(a,n/3)+count(a,n/4);
				return a[n];
			}
			else
				return count(a,n/2)+count(a,n/3)+count(a,n/4);
		}
		else
		{
			if(n<1000000)
			{
				a[n]=n;
				return a[n];
			}
			else
				return count(a,n/2)+count(a,n/3)+count(a,n/4);
		}
	}	
}
int main()
{
	freopen("input.txt","r",stdin);
	int n,a[1000000]={0};
	while(scanf("%lld",&n) !=EOF)
		cout<<count(a,n)<<endl;
}

