#include<iostream>
#include<fstream>
using namespace std;
#include<math.h>
int main()
{
	int i,j,k;
	for(i=1;i<=100;i++)
	{
		k=0;
		for(j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
			{
				k=1;
				break;
			}
		}
		if(k==0)
			cout<<i<<endl;
	}
}
