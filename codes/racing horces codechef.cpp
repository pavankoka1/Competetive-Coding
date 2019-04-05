#include <iostream>
using namespace std;
 
int main()
{
	long long int T,N,i,j,min,k,tmp,t;
	long long int ar[5000];
	cin>>T;
	for(i=0;i<T;i++)
	{
		cin>>N;
		for(j=0;j<N;j++)
		{
			cin>>ar[j];
		}
		for(j=0;j<N;j++)
		{
					
			for(k=j+1;k<N;k++)
			{
				if(ar[k]<ar[j])
				{
					tmp=ar[j];
					ar[j]=ar[k];
					ar[k]=tmp;
				}
			}
		}
		min=ar[1]-ar[0];
		for(j=0;j<N-1;j++)
		{
		 t=ar[j+1]-ar[j];
		 if(t<min)
		 {
		 	min=t;
		 }
	    }
	}
}
