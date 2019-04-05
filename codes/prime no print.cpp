#include<iostream>
using namespace std;

int main()
{
	int c=0;
	for(int i=0;i<200;i++)
	{
		c=0;
		for(int j=2;j<i-1;j++)
		{
			if(i%j==0)
			{
				c++;
				break;
			}
		}
		if(c==0)
			cout<<i<<endl;
	}
}
 
