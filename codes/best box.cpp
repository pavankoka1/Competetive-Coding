#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		float p,s,a1,a2,h1,h2,v1,v2;
		cin>>p>>s;
		a1=(p+sqrt(p*p-24*s))/12;
		h1=(p-8*a1)/4;
		a2=(p-sqrt(p*p-24*s))/12;
		h2=(p-8*a2)/4;
		if(a1<0||h1<0)
		{
			a1=0;
			h1=0;
		}
		if(a2<0||h2<0)
		{
			a2=0;
			h2=0;
		}
		v1=a1*a1*h1;
		v2=a2*a2*h2;
		if(v1>v2)
			cout<<fixed<<setprecision(2)<<v1<<endl;
		else
			cout<<fixed<<setprecision(2)<<v2<<endl;	
	}
	return 0;
}

