#include<iostream>
#include<fstream>
using namespace std;
#include<math.h>
int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		long long int sum=0,b,a;
		string str2,str;
		cin>>a>>str;
		
		for(int i=0;i<a;i++)
		{
			cin>>str2;
			if(str2=="CONTEST_WON")
			{
				cin>>b;
				if(b<20)
					sum=sum+300+20-b;
				else
					sum = sum +300;
			}
			
			if(str2=="CONTEST_HOSTED")
				sum=sum+50;
			
			if(str2=="BUG_FOUND")
			{
				cin>>b;
				sum=sum+b;
			}
			
			if(str2=="TOP_CONTRIBUTOR")
				sum=sum+300;
		}
		//cout<<sum<<endl;
		int div;
		if(str=="INDIAN")
			div=200;
		else
			div=400;
			
		cout<<sum/div<<endl;
	}
	return 0;
}




