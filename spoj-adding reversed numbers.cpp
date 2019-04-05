#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,ar=0,br=0,c=0;
		cin>>a>>b;
		for(;;)
		{
			if(a==0)
				break;
			ar=ar*10+a%10;
			a=a/10;	
		}
		for(;;)
		{
			if(b==0)
				break;
			br=br*10+b%10;
			b=b/10;	
		}
		a=ar+br;
		for(;;)
		{
			if(a==0)
				break;
			c=c*10+a%10;
			a=a/10;	
		}
		cout<<c<<endl;
	}
	return 0;
}

