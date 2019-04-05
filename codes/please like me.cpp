#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
	int n;
	cin>>n;
	while(n--)
	{
		long long r,l,d,s,c;
		cin>>l>>d>>s>>c;
		r=s;
		for(long long i=d;i>1;i--)
		{
			r=r+r*c;
			if(r>=l)
				break;
		}
		if(r>=l)
			cout<<"ALIVE AND KICKING"<<endl;
		else
			cout<<"DEAD AND ROTTING"<<endl;		
	}
}

