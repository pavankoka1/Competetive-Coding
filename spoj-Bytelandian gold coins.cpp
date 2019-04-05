#include<bits/stdc++.h>
using namespace std;
int count(int s)
{
	if(s/2+s/3+s/4>s)
		return(count(s/2)+count(s/3)+count(s/4));
	else
		return(s);
}
int bigcount(int a[],int s)
{
	if(s<100000)
		return(a[s]);
	else
		return(bigcount(s/2)+bigcount(s/3)+bigcount(s/4));	
}
int main()
{
//	freopen("input.txt","r",stdin);
	long long int t;
	int a[100000]={0};
	for(int i=1;i<100000;i++)
		a[i]=count(i);
	while(scanf("%lld",&t) !=EOF)
		cout<<bigcount(a,t);
	return 0;
}

