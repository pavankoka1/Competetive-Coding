#include<bits/stdc++.h>
using namespace std;

int comp(int n)
{
	int b=0,temp,ans=0;
	temp=n;
	while(temp>1){
		temp=temp>>1;
		b++;
	}
	ans=b*pow(2,b-1);
	n=n-pow(2,b);
	ans+=n+1;
//	cout<<b<<" "<<ans<<endl;
	if(n>0)
		return (ans+comp(n));
	else
		return ans;	
}
int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<comp(n)<<endl;
	}
}

