#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int x,sum=0;
		cin>>x;
				
		sum=x/2048;
		x=x%2048;
		
		//cout<<sum<<endl;
		 
		for(int i=0;i<11;i++)
		{
			if(x==0)
				break;
				
			if(x%2==1)
				sum++;
			
			x=x/2;	
		//	cout<<x<<endl;
		}
	
		cout<<sum<<endl;
	}
}
