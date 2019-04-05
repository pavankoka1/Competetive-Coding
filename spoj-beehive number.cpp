#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
	for(;;)
	{
		int n;
		cin>>n;
		if(n==-1)
			break;
		if((n-1)%6==0)
		{
			int x=n/6;
			int y=0;
			for(int i=1;;i++)
			{
				if(x==y)
				{
					cout<<"Y"<<endl;
					break;
				}
				if(y>x)
				{
					cout<<"N"<<endl;
					break;
				}
				y+=i;
			}
		}
		else
			cout<<"N"<<endl;		
	}
}

