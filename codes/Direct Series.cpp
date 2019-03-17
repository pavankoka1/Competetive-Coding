#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007;
int main()
{
	freopen("input.txt","r",stdin);
	int q;
	cin>>q;
	while(q--)
	{
		int t,n;
		cin>>n>>t;
		unsigned long long int x=1,ans=1;
		int flag=0,check=0;
		for(int i=n+1,j=1;i<=n+t+1;i++,j++)
		{
//			cout<<x<<" "<<ans<<endl;
			if(flag==0 && (i%(t+1)==0))
			{
				x*=(i/(t+1));
				flag++;
			}
			else	
				x*=i;
//			if(x>=1000000007)
//				check++;
			if(flag==0 && (x%(t+1)==0 && check==0))
			{
				x/=(t+1);
				flag++;
			}
			x%=1000000007;
			if(i!=n+t+1)
				ans*=j;
			ans%=1000000007;
		}
//		x/=(t+1);
//		if(flag==0)
//			cout<<"sex"<<endl;
//		cout<<check<<endl;	
//		cout<<x<<" "<<ans<<endl;
		x-=ans;
		x%=1000000007;
		cout<<x<<endl;	
	}
}

