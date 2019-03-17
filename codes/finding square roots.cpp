#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int a,i;
		cin>>a;
		
		for(i=0;;i++)
		{
			if((i*i)>=a)
			{
				if((i*i)==a)
				 i++;
				 
				 break;
				 
			}
		}
		cout<<i-1<<endl;
	}
}
