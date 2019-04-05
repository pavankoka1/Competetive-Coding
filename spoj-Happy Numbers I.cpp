#include<bits/stdc++.h>
using namespace std;

int lucky(int n,int a[],int c)
{
//	cout<<n<<endl;
	int x=0;
	for(;;)
	{
		if(n==0)
			break;
			
		x+=(n%10)*(n%10);
		n=n/10;	
	}
	a[x]++;
	c++;
	if(x==1)
		return c;
	else if(a[x]==2)
		return -1;
	
	return lucky(x,a,c);		
}
int main()
{
//	freopen("input.txt","r",stdin);
	int c=0,n;
	cin>>n;
	int a[1000]={0};
	c=lucky(n,a,c);
	cout<<c<<endl;
}

