#include<iostream>
#include<cmath>
using namespace std;

int main()
{
//	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,nn;
		cin>>n;
		nn=n;
		long long int count=n,p;
		for(long long int i=2;n!=1;i++)
		{
//			cout<<n<<endl;
//			cout<<count<<endl;
			p=1;
			if(i*i>nn) break;
			
			else if(n%i==0)
			{
				while(n%i==0)
				{
					n/=i;
					p=p*i;
				}
//				cout<<n<<endl;
					
				count*=((float)(1.0-(1.0/(float)i)));	
			}
		}
//		cout<<n<<endl;
		if(n!=1)
		count*=((float)(1.0-(1.0/(float)n)));
		
		cout<<(int)count<<endl;	
	}
}

