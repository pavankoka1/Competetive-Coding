#include<iostream>
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
		
		int n;
		cin>>n;
		int a[n+5];
		
		for(int i=1;i<=n;i++)
			cin>>a[i];
		
		int b[2005],c=0,k=0,x[1005],kcc=0,check=0;
		
		for(;;)
		{
			check=0;
			
			for(int i=1;i<=n;i++)
			{
				if(a[i]==0)
					check++;
			}
			
			if(check==n)
				break;
			
			int i=0;
			for(int j=1;j<=n;j++)
			{
				if(a[j]!=0)
				{
					i=j;
					break;
				}
			}	
			int j=i,kc=0,ij=i;
			for(;;)
			{
				if(a[i]==j)
				{
					b[k]=i;
					k++;
					b[k]=j;
					k++;
					kc=kc+2;
					a[i]=0;
					break;
				}
				b[k]=i;
				k++;
				i=a[i];
				kc++;
				a[ij]=0;
				ij=i;
			}
			c++;
			x[kcc]=kc;
			kcc++;
		}	
		
		cout<<c<<endl;
		int kccc=0;
		
		for(int i=0;i<kcc;i++)
		{
			for(int j=kccc;j<kccc+x[i];j++)
			{
				cout<<b[j]<<" ";
			}
			kccc=kccc+x[i];	
			cout<<endl;	
		}
		
	return 0;
}
