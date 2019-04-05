#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int n,in,x=0,y=0,z=0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>in;
			if(in==0)
				x++;
			else if(in==1)
				y++;
			else if(in==2)
				z++;		
		}
		for(int i=0;i<x;i++)
			cout<<"0 ";
		for(int i=0;i<y;i++)
			cout<<"1 ";
		for(int i=0;i<z;i++)
			cout<<"2 ";
		cout<<endl;			
	}
}

