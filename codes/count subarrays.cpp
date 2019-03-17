#include<iostream>
#include<fstream>
using namespace std;
#include<math.h>

long long int a[100005];

int main()
{
	long long int i,j,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long int c=0;
		
		for(i=0;i<n;i++)
			cin>>a[i];
		
		int st=0,end,sum=0;
		for(i=0;i<n;i++)
		{
			if( a[i] > a[i+1] )
			{
				end = i;
				c = end - st + 1;
				sum = sum + c*(c+1)/2 ;
				//cout<<sum<<"\t"<<st<<"\t"<<end<<endl;
				st = i+1;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}

/*
2
4
1 4 2 3
1
5

1
7 
4 5 6 7 5 8 6
*/
