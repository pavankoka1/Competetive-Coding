#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
	for(;;)
	{
		float t,a[10005];
	cin>>t;
	if(t==-1)
		break;
	for(int i=0;i<t;i++)
		cin>>a[i];
	float c=0;
	for(int i=0;i<t;i++)
		c=c+a[i];
	float f=c/t;
	if(f-(int)f==0)
	{
		c=0;
		for(int i=0;i<t;i++)
		{
			if(a[i]>f)
				c=c+a[i]-f;
		}
		cout<<c<<endl;
	}	
	else
		cout<<"-1"<<endl;
	}
	return 0;
}

