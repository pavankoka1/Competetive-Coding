#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		long long s,a,d,x,y,n;
		cin>>x>>y>>s;
		n=(2*s)/(x+y);
		d=(y-x)/(n-5);
		a=x-(2*d);
		cout<<n<<endl;
		for(int i=0;i<n;i++)
			cout<<(a+(i*d))<<" ";
		cout<<endl;	
	}
}

