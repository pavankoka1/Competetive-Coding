
#include <iostream>
#include <fstream>
using namespace std;
#include<math.h>

#define m 1000000007
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,i,j,k,ki;
		cin>>n;
		n++;
    
		k=pow(2,n);
		long long int a[100],b[10000],bi=2;
		
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		long long int sum = (a[0]*a[1]) % m;
		b[0]=a[0];
		b[1]=a[1];
		
		for(i=2;i<n;i++)
		{	
			sum = (sum*2) %m;
			ki=pow(2,i-1);
			for(j=0;j<ki;j++)
	        	b[j+ki]=b[j];
			for(j=0;j<ki;j++)
			{
				if(j%2==0)
				{
					sum=(sum+a[i]*b[j]) % m;
					b[j]=a[i];
				}
				if(j%2!=0)
				{
					sum=(sum+a[i]*b[j])%m;
					b[bi+1]=a[i];
					bi=bi+2;
				}
			}
		}
		
		cout<<sum*2<<"\n";
	}
	
}

/*
2
1
1 2
2
1 2 1

*/
