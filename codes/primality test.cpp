#include<iostream>
#include<math.h>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	
	while(t--)
	{
		long long int n;
		int c=0;
		cin>>n;
		
		for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
				c++;
		}
		
		if(c==0)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}
}
