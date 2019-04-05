#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
		int a[1005],i=0;
		for(;;)
		{
			int x;
			cin>>x;
			if(x==0)
				break;
			a[i]=x;
			i++;	
		}
		int c=0;
		for(int j=0;j<i;j++)
		{
			c=0;
			for(int k=0;k<=a[j];k++)
				c=c+k*k;
			cout<<c<<endl;	
		}
	return 0;
}

