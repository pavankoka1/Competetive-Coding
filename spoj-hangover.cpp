#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
	for(;;)
	{
		float f,c=0;
		cin>>f;
		if(f==0)
			break;
		float i=2;
		for(i=2;;i++)
		{
			c=c+1/i;
			if(c>=f)
				break;
//			cout<<"   "<<c<<endl;	
		}
		cout<<i-1<<" card(s)"<<endl;	
	}
	return 0;
}

