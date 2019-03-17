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
		int n,s=0;
		cin>>n;
		
		for(int i=1;;i++)
		{
			if(n/pow(5,i)==0)
				break;
			
			s=s+n/pow(5,i);	
		}
		cout<<s<<endl;
	}
}
