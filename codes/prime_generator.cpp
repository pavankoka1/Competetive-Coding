#include<iostream>
#include<fstream>
using namespace std;
#include<math.h>
int main()
{
	int a[100]={0},i,j;
	a[0]=1;
	for(i=1;i<=100;i++)
	{
		if(a[i+1]==0)
		{
			for(j=2;j<=100/(i+1);j++)
				a[j*(i+1)] = 1;
		}
	}
	for(i=1;i<=100;i++)
		cout<<a[i]<<"\t"<<i<<endl;
	
}
