#include<iostream>
using namespace std;
#include<math.h>

int main()
{
	int a,n,k;
	cin>>a>>n>>k;
	
	int b[k];
	
	for(int i=0;i<k;i++)
		b[i]=0;
		
	for(int i=0;i<a;i++)
	{
		b[0]++;
		
		for(int j=0;j<k;j++)
		{
			if(b[j]>n)
			{
				b[j]=0;
				b[j+1]++;
			}
		}
	}
	
	for(int i=0;i<k;i++)
		cout<<b[i]<<" ";
}

/*
3 1 3
*/
